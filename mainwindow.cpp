#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sysinfo.h"

#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , mCpuWidget(this)
{
    ui->setupUi(this);
    SysInfo::instance().init();
    QVBoxLayout* vb = new QVBoxLayout(this);
    vb->addWidget(&mCpuWidget);
    ui->centralwidget->setLayout(vb);
}

MainWindow::~MainWindow()
{
    delete ui;
}

