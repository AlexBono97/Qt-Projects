#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    int cantidad=0;
    int maletas=0;
    ~MainWindow();

private slots:
    void on_BtnEncolar_pressed();

    void on_BtnCheck_pressed();

    void on_pushButton_pressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
