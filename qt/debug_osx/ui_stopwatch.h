/********************************************************************************
** Form generated from reading UI file 'stopwatch.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOPWATCH_H
#define UI_STOPWATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stopWatch
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *timeLabel;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *resetButton;
    QLabel *message;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *stopWatch)
    {
        if (stopWatch->objectName().isEmpty())
            stopWatch->setObjectName(QStringLiteral("stopWatch"));
        stopWatch->resize(223, 209);
        centralWidget = new QWidget(stopWatch);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 10, 61, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        timeLabel = new QLabel(centralWidget);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setGeometry(QRect(50, 30, 131, 51));
        timeLabel->setFont(font);
        timeLabel->setFrameShape(QFrame::WinPanel);
        timeLabel->setFrameShadow(QFrame::Raised);
        timeLabel->setLineWidth(2);
        timeLabel->setMidLineWidth(0);
        timeLabel->setAlignment(Qt::AlignCenter);
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(20, 90, 61, 21));
        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setGeometry(QRect(80, 90, 61, 21));
        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(140, 90, 61, 21));
        message = new QLabel(centralWidget);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(20, 120, 181, 31));
        QFont font1;
        font1.setItalic(true);
        message->setFont(font1);
        message->setFrameShape(QFrame::Panel);
        message->setFrameShadow(QFrame::Sunken);
        message->setLineWidth(2);
        message->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        stopWatch->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(stopWatch);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 223, 22));
        stopWatch->setMenuBar(menuBar);
        mainToolBar = new QToolBar(stopWatch);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        stopWatch->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(stopWatch);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        stopWatch->setStatusBar(statusBar);

        retranslateUi(stopWatch);

        QMetaObject::connectSlotsByName(stopWatch);
    } // setupUi

    void retranslateUi(QMainWindow *stopWatch)
    {
        stopWatch->setWindowTitle(QApplication::translate("stopWatch", "stopWatch", 0));
        label->setText(QApplication::translate("stopWatch", "Timer", 0));
        timeLabel->setText(QApplication::translate("stopWatch", "00 : 00 : 00, 00", 0));
        startButton->setText(QApplication::translate("stopWatch", "Start", 0));
        stopButton->setText(QApplication::translate("stopWatch", "Stop", 0));
        resetButton->setText(QApplication::translate("stopWatch", "Reset", 0));
        message->setText(QApplication::translate("stopWatch", "Message", 0));
    } // retranslateUi

};

namespace Ui {
    class stopWatch: public Ui_stopWatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOPWATCH_H
