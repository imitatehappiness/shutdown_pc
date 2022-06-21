#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include <QMessageBox>
#include <QPixmap>
#include <QMovie>
#include <popup.h>
#include <dialog.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void timer();
private slots:
    void on_shutdown_clicked();
    void shutdown();
    void update_label();
    void on_stop_clicked();
    void slot_shutdown();

private:
    Ui::MainWindow *ui;
    bool StopTimer = 0;
    QTimer *time;
    QTimer *timerSec;
    PopUp *popUp;
};

#endif // MAINWINDOW_H
