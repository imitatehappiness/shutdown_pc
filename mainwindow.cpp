#include "mainwindow.h"
#include "ui_mainwindow.h"


int ms = 0;
int timer_off;
bool f = 0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("SHUTDOWN TIMER");

    QMovie *movie = new QMovie(":/img/cat.gif");
    movie->setScaledSize(QSize(150,150));
    ui->gif->setMovie(movie);
    movie->start();
    time = new QTimer();
    ui->progressBar->setValue(0);
    popUp = new PopUp();

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::shutdown(){
    //qDebug()<<"SHUTDOWN";
    system("shutdown -s -t 0");
}

void MainWindow::update_label(){
    timer_off++;

    if(ms/1000-timer_off==60){
        popUp->setPopupText("The PC will shut down after 1 min.");
        popUp->show();
    }

    if(ms/1000-timer_off==300){
        popUp->setPopupText("The PC will shut down after 5 min.");
        popUp->show();
    }

    ui->progressBar->setValue(timer_off);
    ui->last_time->setText(QString::number(timer_off) + "/" +QString::number(ms/1000) + " s");

}

void MainWindow::timer(){
    time->setInterval(ms);
    time->setSingleShot(1);
    connect(time, SIGNAL(timeout()), this, SLOT(shutdown()));
    time->start();
}

void MainWindow::on_shutdown_clicked(){


    int n = QMessageBox::information(0,
                                 "Information",
                                 "Turn on the timer?",
                                 "Yes",
                                 "No",
                                 QString(),
                                 0,
                                 1
                                );


    if(!n) {
        if(f){
            delete timer_sec;
        }

        ui->progressBar->setValue(0);
        timer_sec = new QTimer();

        timer_off = 0;
        ms = (ui->hBox->text().toInt() * 3600 + ui->mBox->text().toInt() * 60) * 1000;

        popUp->setPopupText("The PC will shut down after " + QString::number(ms/1000) + "sec.");
        popUp->show();

        ui->last_time->setText(QString::number(timer_off) + "/" + QString::number(ms/1000) + " s");
        connect(timer_sec, SIGNAL(timeout()), this, SLOT(update_label()));
        ui->progressBar->setMaximum(ms/1000);

        timer_sec->start(1000);
        timer();
        f = 1;
    }

}

void MainWindow::on_stop_clicked(){

    ui->progressBar->setValue(0);
    time->stop();
    timer_sec->stop();
    ui->last_time->setText("");
}
