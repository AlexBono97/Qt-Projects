#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qgraphicsview.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QGraphicsScene scene1;
    QGraphicsView view1(&scene1);
    view1.show();


    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
