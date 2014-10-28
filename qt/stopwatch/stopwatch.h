#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QMainWindow>
#include <QPushButton>
#include <QTime>
#include <QTimer>

namespace Ui {
class stopWatch;
}

class stopWatch : public QMainWindow
{
    Q_OBJECT

public slots:
    void stop();
    void start();
    void reset();

public:

    explicit stopWatch(QWidget *parent = 0);

protected:
    void timerEvent(QTimerEvent *);



private:
    Ui::stopWatch *ui;
    QTime *time;
    QTimer *timer;
    bool mRunning;
    QDateTime mStartTime;
    qint64 sessionTime;
    qint64 totalTime;


};

#endif // STOPWATCH_H
