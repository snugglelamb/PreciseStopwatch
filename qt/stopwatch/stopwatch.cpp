#include "stopwatch.h"
#include "ui_stopwatch.h"
#include <QString>
#include <QDateTime>

stopWatch::stopWatch(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::stopWatch)
{
    ui->setupUi(this);

    ui->startButton->setEnabled(1);
    ui->stopButton->setEnabled(1);
    ui->resetButton->setEnabled(1);
    
    connect(ui->startButton, SIGNAL(clicked()),this,SLOT(start()));
    connect(ui->stopButton, SIGNAL(clicked()),SLOT(stop()));
    connect(ui->resetButton,SIGNAL(clicked()),SLOT(reset()));

    
    startTimer(0);
    stop();
    reset();
}

void stopWatch::start()
   {      
       if(!mRunning)
       {
         mStartTime = QDateTime::currentDateTime();
         mRunning = true;
         ui->message->setText("Now started.");
       }
       else{
         ui->message->setText("Already started.");
       }
      // ui->startButton->setEnabled(0);
   }

   void stopWatch::stop()
   {
   //    ui->stopButton->setEnabled(1);
   //    ui->startButton->setEnabled(0);
    if(mRunning)
    {
        timerEvent(new QTimerEvent(0));
        totalTime += sessionTime;
        mRunning = false;
    }
    else
    {
          ui->message->setText("Already stoped.");
    }

   }

   void stopWatch::reset()
   {
    //   ui->stopButton->setEnabled(0);
    //   ui->startButton->setEnabled(1);
       if(!mRunning)
       {
           totalTime= 0;
           mRunning = false;
             ui->timeLabel->setText("00 : 00 : 00, 00");
            ui->message->setText("Message");
        }
       else
       {
            ui->message->setText("Program is running.");
       }
    }


   void stopWatch::timerEvent(QTimerEvent *)
      {
          if(mRunning)
          {
              sessionTime = mStartTime.msecsTo(QDateTime::currentDateTime());
              qint64 time = totalTime + sessionTime;
              int h = time / 1000 / 60 / 60;
              int m = (time / 1000 / 60) - (h * 60);
              int s = (time / 1000) - (m * 60);
              int ms = time - ( s + ( m + ( h * 60)) * 60) * 1000;
              int ms_dis = ms / 10;
              QString diff = QString("%1 : %2 : %3, %4")
                      .arg(h,2,10,QChar('0'))
                      .arg(m,2,10,QChar('0'))
                      .arg(s,2,10,QChar('0'))
                      .arg(ms_dis,2,10,QChar('0'));
              ui->timeLabel->setText(diff);
          }
      }
