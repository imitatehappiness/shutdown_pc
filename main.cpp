#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(443,223);
    QIcon icon(":/img/clock.png");
    w.setWindowIcon(icon);
    w.show();


    return a.exec();
}
