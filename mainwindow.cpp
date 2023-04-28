#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sysinfo.h"

#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , mCpuWidget(this)
    , mMemoryWidget(this)
{
    ui->setupUi(this);
    SysInfo::instance().init();
    QLayout* vb = new QHBoxLayout(this);
    vb->addWidget(&mCpuWidget);
    vb->addWidget(&mMemoryWidget);
    ui->centralwidget->setLayout(vb);
}

MainWindow::~MainWindow()
{
    delete ui;
}

