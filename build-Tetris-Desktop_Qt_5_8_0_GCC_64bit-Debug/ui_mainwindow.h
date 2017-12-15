/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QFrame *TetrisBoard;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLCDNumber *lcdNumber_score;
    QSpacerItem *verticalSpacer;
    QFrame *frame_next;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber_linesRemoved;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLCDNumber *lcdNumber_level;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_start;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_Quit;
    QPushButton *pushButton_Pause;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(665, 749);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(115, 30));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        TetrisBoard = new QFrame(centralWidget);
        TetrisBoard->setObjectName(QStringLiteral("TetrisBoard"));
        TetrisBoard->setMinimumSize(QSize(400, 650));
        TetrisBoard->setFrameShape(QFrame::StyledPanel);
        TetrisBoard->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(TetrisBoard, 0, 1, 5, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(115, 30));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        lcdNumber_score = new QLCDNumber(centralWidget);
        lcdNumber_score->setObjectName(QStringLiteral("lcdNumber_score"));
        lcdNumber_score->setMinimumSize(QSize(0, 50));
        lcdNumber_score->setMaximumSize(QSize(16777215, 50));
        lcdNumber_score->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(lcdNumber_score);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 2, 2, 1);

        frame_next = new QFrame(centralWidget);
        frame_next->setObjectName(QStringLiteral("frame_next"));
        frame_next->setMinimumSize(QSize(0, 50));
        frame_next->setMaximumSize(QSize(16777215, 50));
        frame_next->setFrameShape(QFrame::StyledPanel);
        frame_next->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_next, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(115, 30));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        lcdNumber_linesRemoved = new QLCDNumber(centralWidget);
        lcdNumber_linesRemoved->setObjectName(QStringLiteral("lcdNumber_linesRemoved"));
        lcdNumber_linesRemoved->setMinimumSize(QSize(0, 50));
        lcdNumber_linesRemoved->setMaximumSize(QSize(16777215, 50));
        lcdNumber_linesRemoved->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(lcdNumber_linesRemoved);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_2, 2, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_4);

        lcdNumber_level = new QLCDNumber(centralWidget);
        lcdNumber_level->setObjectName(QStringLiteral("lcdNumber_level"));
        lcdNumber_level->setMinimumSize(QSize(0, 50));
        lcdNumber_level->setMaximumSize(QSize(16777215, 50));
        lcdNumber_level->setFrameShape(QFrame::Box);

        verticalLayout_5->addWidget(lcdNumber_level);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        gridLayout->addLayout(verticalLayout_5, 3, 0, 1, 1);

        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));

        gridLayout->addWidget(pushButton_start, 4, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_Quit = new QPushButton(centralWidget);
        pushButton_Quit->setObjectName(QStringLiteral("pushButton_Quit"));

        verticalLayout_3->addWidget(pushButton_Quit);

        pushButton_Pause = new QPushButton(centralWidget);
        pushButton_Pause->setObjectName(QStringLiteral("pushButton_Pause"));

        verticalLayout_3->addWidget(pushButton_Pause);


        gridLayout->addLayout(verticalLayout_3, 4, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 665, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Tetris", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "NEXT", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "SCORE", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "LINES REMOVED", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "LEVEL", Q_NULLPTR));
        pushButton_start->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButton_Quit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        pushButton_Pause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
