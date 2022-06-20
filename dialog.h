#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
signals:
    void s_yes_clicked();
private slots:
    void on_yes_clicked();

    void on_no_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
