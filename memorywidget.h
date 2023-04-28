#ifndef MEMORYWIDGET_H
#define MEMORYWIDGET_H

#include "sysinfowidget.h"
#include <QObject>
#include <QtCharts/QLineSeries>

class MemoryWidget : public SysInfoWidget
{
public:
    explicit MemoryWidget(QWidget *parent = 0);

protected slots:
    void updateSeries() override;
private:
    QtCharts::QLineSeries* mSeries;
    qint64 mPointPositionX;
};

#endif // MEMORYWIDGET_H
