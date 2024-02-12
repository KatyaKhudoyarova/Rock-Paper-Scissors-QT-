#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    void on_pushButton_clicked(int choice);
    Ui::MainWindow *ui;
    QList<QString> choices={"Камінь","Ножиці","Папір"};
    QString choice_human, choice_comp;
    void make_choice();
    int choice_r,choice_h;
    QString check_winner();
};
#endif // MAINWINDOW_H
