#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pasajero.h"
#include "checkin.h"
#include <QString>
#include <QPicture>
#include <QPixmap>
#include <QBitmap>
#include <QList>
#include <QMessageBox>

CheckIn  fila;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QPixmap imagen2("C:/Users/Dell/Documents/Aeropuerto/airplane.png");
    ui->logo->setPixmap(imagen2);
    ui->logo->setScaledContents( true );
    ui->logo->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BtnEncolar_pressed()
{
   // Pasajero * pas = new Pasajero();
    int peso= ui->txtPeso->text().toInt();
    QString name = ui->txtNombre->text();
    string nombre = name.toLocal8Bit().constData();
    ui->txtPeso->setText("");
    ui->txtNombre->setText("");

    if(peso!=0)//siempre se agregan,la evaluacion no funciona :l
    {
        fila.add(new Pasajero(nombre,peso));
        cantidad++;
    }


    ui->lMaletasenCola->setText(QString::number(cantidad));
    //la variable cantidad maneja el numero de maletas que se han agregado
    //esta variable esta manejada en mainwindow.h


    switch(cantidad)//a medida que aumentan las maletas, iran apareciendo
    {
        case 1:
    {
        QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maleta1.png");
        ui->label_27->setPixmap(imagen);
        ui->label_27->setScaledContents( true );
        ui->label_27->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 2:
    {
        QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maleta1.png");
        ui->label_26->setPixmap(imagen);
        ui->label_26->setScaledContents( true );
        ui->label_26->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 3:
    {
        QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maleta4.jpg");
        ui->label_25->setPixmap(imagen);
        ui->label_25->setScaledContents( true );
        ui->label_25->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 4:
    {
        QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maleta4.jpg");
        ui->label_24->setPixmap(imagen);
        ui->label_24->setScaledContents( true );
        ui->label_24->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 5:
    {
        QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maleta1.png");
        ui->label_23->setPixmap(imagen);
        ui->label_23->setScaledContents( true );
        ui->label_23->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 6:
    {
        QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maleta2.png");
        ui->label_22->setPixmap(imagen);
        ui->label_22->setScaledContents( true );
        ui->label_22->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 7:
    {
        QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maleta4.jpg");
        ui->label_21->setPixmap(imagen);
        ui->label_21->setScaledContents( true );
        ui->label_21->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 8:
    {
        QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maleta4.jpg");
        ui->label_20->setPixmap(imagen);
        ui->label_20->setScaledContents( true );
        ui->label_20->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    }

   /* QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maleta1.png");
    ui->label_27->setPixmap(imagen);
    ui->label_27->setScaledContents( true );
    ui->label_27->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );*/



}

void MainWindow::on_BtnCheck_pressed()
{

    QMessageBox mssgBox;
    if(fila.isEmpty()){
        mssgBox.setText("LA FILA ESTA VACIA, POR FAVOR AGREGUE OTRO ELEMENTO");
        mssgBox.exec();}
    else{

    int peso= fila.head->pesoE;//aca no lee el peso almacenado
    string nam = fila.head->nombre ; //aca igual no lee el nombre almacenado

    cout << nam << endl;
    cout << peso << endl;

    ui->lNombrePas->setText(QString::fromStdString(nam));
    ui->lPeso->setText(QString::number(peso));
    fila.checkIn();
    cantidad--;
    maletas++;
    ui->lMaletasEntregadas->setText(QString::number(maletas));
    if(fila.head!=0)
             ui->lMaletasenCola->setText(QString::number(cantidad));
    else
             ui->lMaletasenCola->setText("0");
    QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maletalista.png");
    switch(cantidad)
    {
        case 0:
    {
        ui->label_27->setPixmap(imagen);
        ui->label_27->setScaledContents( true );
        ui->label_27->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_26->setPixmap(imagen);
        ui->label_26->setScaledContents( true );
        ui->label_26->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_25->setPixmap(imagen);
        ui->label_25->setScaledContents( true );
        ui->label_25->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_24->setPixmap(imagen);
        ui->label_24->setScaledContents( true );
        ui->label_24->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_23->setPixmap(imagen);
        ui->label_23->setScaledContents( true );
        ui->label_23->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_22->setPixmap(imagen);
        ui->label_22->setScaledContents( true );
        ui->label_22->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_21->setPixmap(imagen);
        ui->label_21->setScaledContents( true );
        ui->label_21->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_20->setPixmap(imagen);
        ui->label_20->setScaledContents( true );
        ui->label_20->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }

        case 1:
    {
        ui->label_26->setPixmap(imagen);
        ui->label_26->setScaledContents( true );
        ui->label_26->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_25->setPixmap(imagen);
        ui->label_25->setScaledContents( true );
        ui->label_25->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_24->setPixmap(imagen);
        ui->label_24->setScaledContents( true );
        ui->label_24->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_23->setPixmap(imagen);
        ui->label_23->setScaledContents( true );
        ui->label_23->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_22->setPixmap(imagen);
        ui->label_22->setScaledContents( true );
        ui->label_22->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_21->setPixmap(imagen);
        ui->label_21->setScaledContents( true );
        ui->label_21->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_20->setPixmap(imagen);
        ui->label_20->setScaledContents( true );
        ui->label_20->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 2:
    {

        ui->label_25->setPixmap(imagen);
        ui->label_25->setScaledContents( true );
        ui->label_25->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_24->setPixmap(imagen);
        ui->label_24->setScaledContents( true );
        ui->label_24->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_23->setPixmap(imagen);
        ui->label_23->setScaledContents( true );
        ui->label_23->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_22->setPixmap(imagen);
        ui->label_22->setScaledContents( true );
        ui->label_22->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_21->setPixmap(imagen);
        ui->label_21->setScaledContents( true );
        ui->label_21->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_20->setPixmap(imagen);
        ui->label_20->setScaledContents( true );
        ui->label_20->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 3:
    {

        ui->label_24->setPixmap(imagen);
        ui->label_24->setScaledContents( true );
        ui->label_24->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_23->setPixmap(imagen);
        ui->label_23->setScaledContents( true );
        ui->label_23->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_22->setPixmap(imagen);
        ui->label_22->setScaledContents( true );
        ui->label_22->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_21->setPixmap(imagen);
        ui->label_21->setScaledContents( true );
        ui->label_21->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_20->setPixmap(imagen);
        ui->label_20->setScaledContents( true );
        ui->label_20->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 4:
    {

        ui->label_23->setPixmap(imagen);
        ui->label_23->setScaledContents( true );
        ui->label_23->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_22->setPixmap(imagen);
        ui->label_22->setScaledContents( true );
        ui->label_22->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_21->setPixmap(imagen);
        ui->label_21->setScaledContents( true );
        ui->label_21->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_20->setPixmap(imagen);
        ui->label_20->setScaledContents( true );
        ui->label_20->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 5:
    {

        ui->label_22->setPixmap(imagen);
        ui->label_22->setScaledContents( true );
        ui->label_22->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_21->setPixmap(imagen);
        ui->label_21->setScaledContents( true );
        ui->label_21->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_20->setPixmap(imagen);
        ui->label_20->setScaledContents( true );
        ui->label_20->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 6:
    {

        ui->label_21->setPixmap(imagen);
        ui->label_21->setScaledContents( true );
        ui->label_21->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        ui->label_20->setPixmap(imagen);
        ui->label_20->setScaledContents( true );
        ui->label_20->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 7:
    {

        ui->label_20->setPixmap(imagen);
        ui->label_20->setScaledContents( true );
        ui->label_20->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
        break;
    }
    case 8:
    {

        break;
    }
    }

   /* QPixmap imagen("C:/Users/Dell/Documents/Aeropuerto/maleta1.png");
    ui->label_27->setPixmap(imagen);
    ui->label_27->setScaledContents( true );
    ui->label_27->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );*/
    mssgBox.setText("El pasajero y su equipaje han sido revisados");
    mssgBox.exec();

    nam="";
    peso=0;
    ui->lNombrePas->setText(QString::fromStdString(nam));
    ui->lPeso->setText(QString::number(peso));
}
}

void MainWindow::on_pushButton_pressed()
{
    QMessageBox mssgBox;
    if(fila.isEmpty())
        mssgBox.setText("LA FILA ESTA VACIA");
    else
        mssgBox.setText("LA FILA NO ESTA VACIA");
    mssgBox.exec();
}
