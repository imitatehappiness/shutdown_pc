/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame_2;
    QPushButton *shutdown;
    QFrame *frame;
    QLabel *label_3;
    QLabel *label_2;
    QSpinBox *hBox;
    QSpinBox *mBox;
    QLabel *last_time;
    QLabel *gif;
    QPushButton *stop;
    QProgressBar *progressBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(443, 223);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 461, 361));
        frame_2->setStyleSheet(QStringLiteral("background-color: #fff"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        shutdown = new QPushButton(frame_2);
        shutdown->setObjectName(QStringLiteral("shutdown"));
        shutdown->setGeometry(QRect(160, 180, 201, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        shutdown->setFont(font);
        shutdown->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #323232;\n"
"	border: none;\n"
"color: #EEEEEE;\n"
"     border-radius: 3px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover{\n"
"         background-color: qlineargradient(spread:pad, x1:0 y1:0, x2:1 y2:0, stop:0 #ED765E, stop:1 #FEA858);\n"
"		color: #323232;\n"
"     border-radius: 3px;\n"
"	border: 2px solid #323232\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"       \n"
" border: 3px solid #EEEEEE;\n"
"     border-radius:3px;\n"
"}"));
        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 151, 261));
        frame->setStyleSheet(QStringLiteral("   background-color: qlineargradient(spread:pad, x1:0 y1:0, x2:1 y2:0, stop:0 #ED765E, stop:1 #FEA858);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 140, 131, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: #FBF0F0"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 131, 41));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: #FBF0F0;"));
        hBox = new QSpinBox(frame);
        hBox->setObjectName(QStringLiteral("hBox"));
        hBox->setGeometry(QRect(10, 100, 131, 31));
        hBox->setFont(font);
        hBox->setStyleSheet(QLatin1String("QSpinBox{\n"
"	 background-color: #323232;\n"
"		border: none;\n"
"		color: #FBF0F0;\n"
"	border-radius: 5px;\n"
"border: 2px solid #323232\n"
"	\n"
"}"));
        hBox->setAlignment(Qt::AlignCenter);
        hBox->setMaximum(23);
        mBox = new QSpinBox(frame);
        mBox->setObjectName(QStringLiteral("mBox"));
        mBox->setGeometry(QRect(10, 180, 131, 31));
        mBox->setFont(font);
        mBox->setStyleSheet(QLatin1String("QSpinBox{\n"
"	 background-color: #323232;\n"
"		color: #FBF0F0;\n"
"	border-radius: 5px;\n"
"border: 2px solid #323232\n"
"	\n"
"}"));
        mBox->setAlignment(Qt::AlignCenter);
        mBox->setMaximum(59);
        mBox->setValue(1);
        last_time = new QLabel(frame);
        last_time->setObjectName(QStringLiteral("last_time"));
        last_time->setGeometry(QRect(10, 10, 131, 31));
        last_time->setFont(font1);
        last_time->setStyleSheet(QStringLiteral("color: #323232"));
        last_time->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gif = new QLabel(frame_2);
        gif->setObjectName(QStringLiteral("gif"));
        gif->setGeometry(QRect(190, 40, 150, 150));
        stop = new QPushButton(frame_2);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(370, 180, 61, 31));
        stop->setFont(font);
        stop->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #323232;\n"
"	border: none;\n"
"color: #EEEEEE;\n"
"     border-radius: 3px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover{\n"
"        background-color: qlineargradient(spread:pad, x1:0 y1:0, x2:1 y2:0, stop:0 #ED765E, stop:1 #FEA858);\n"
"		color: #323232;\n"
"     border-radius: 3px;\n"
"	border: 2px solid #323232\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"       \n"
" border: 3px solid #EEEEEE;\n"
"     border-radius:3px;\n"
"}"));
        progressBar = new QProgressBar(frame_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(160, 10, 271, 21));
        progressBar->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"     background-color: qlineargradient(spread:pad, x1:0 y1:0, x2:1 y2:0, stop:0 #ED765E, stop:1 #FEA858);\n"
"    border-radius: 2px;\n"
"   \n"
" }\n"
"\n"
" QProgressBar {\n"
"   \n"
"	border: 1px solid rgb(33,33,33);\n"
"     border-radius: 4px;\n"
"     padding: 3px;\n"
"border-width: 2px;\n"
"\n"
"\n"
"\n"
" }"));
        progressBar->setMaximum(999999999);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        frame->raise();
        gif->raise();
        shutdown->raise();
        stop->raise();
        progressBar->raise();
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        shutdown->setText(QApplication::translate("MainWindow", "START TIMER", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "MINUTES:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "HOURS:", nullptr));
        last_time->setText(QString());
        gif->setText(QString());
        stop->setText(QApplication::translate("MainWindow", "STOP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
