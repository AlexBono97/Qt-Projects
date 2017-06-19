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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QGroupBox *groupBox;
    QLabel *label_9;
    QLineEdit *txtNombre;
    QLabel *label_10;
    QLineEdit *txtPeso;
    QPushButton *BtnEncolar;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *lMaletasenCola;
    QLabel *label_3;
    QLabel *lMaletasEntregadas;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QLabel *label_5;
    QLabel *lNombrePas;
    QLabel *label_7;
    QLabel *lPeso;
    QPushButton *BtnCheck;
    QLabel *label_6;
    QLabel *label_8;
    QGroupBox *groupBox_4;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *logo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(788, 465);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 330, 71, 71));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(100, 330, 81, 71));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(190, 330, 91, 81));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(290, 330, 81, 81));
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(390, 330, 81, 81));
        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(490, 330, 81, 81));
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(590, 330, 81, 81));
        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(680, 330, 81, 81));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 70, 151, 181));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Bright"));
        groupBox->setFont(font);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 30, 47, 13));
        txtNombre = new QLineEdit(groupBox);
        txtNombre->setObjectName(QStringLiteral("txtNombre"));
        txtNombre->setGeometry(QRect(10, 50, 113, 20));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 80, 47, 13));
        txtPeso = new QLineEdit(groupBox);
        txtPeso->setObjectName(QStringLiteral("txtPeso"));
        txtPeso->setGeometry(QRect(10, 100, 113, 20));
        BtnEncolar = new QPushButton(groupBox);
        BtnEncolar->setObjectName(QStringLiteral("BtnEncolar"));
        BtnEncolar->setGeometry(QRect(40, 140, 75, 23));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(250, 70, 161, 181));
        groupBox_2->setFont(font);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 101, 21));
        lMaletasenCola = new QLabel(groupBox_2);
        lMaletasenCola->setObjectName(QStringLiteral("lMaletasenCola"));
        lMaletasenCola->setGeometry(QRect(130, 30, 21, 21));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 60, 111, 16));
        lMaletasEntregadas = new QLabel(groupBox_2);
        lMaletasEntregadas->setObjectName(QStringLiteral("lMaletasEntregadas"));
        lMaletasEntregadas->setGeometry(QRect(130, 60, 21, 21));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 110, 75, 23));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(430, 70, 311, 181));
        groupBox_3->setFont(font);
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 20, 121, 20));
        lNombrePas = new QLabel(groupBox_3);
        lNombrePas->setObjectName(QStringLiteral("lNombrePas"));
        lNombrePas->setGeometry(QRect(160, 10, 141, 31));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 60, 111, 20));
        lPeso = new QLabel(groupBox_3);
        lPeso->setObjectName(QStringLiteral("lPeso"));
        lPeso->setGeometry(QRect(140, 60, 21, 21));
        BtnCheck = new QPushButton(groupBox_3);
        BtnCheck->setObjectName(QStringLiteral("BtnCheck"));
        BtnCheck->setGeometry(QRect(100, 110, 75, 23));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 10, 211, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Lucida Bright"));
        font1.setPointSize(22);
        label_6->setFont(font1);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 40, 191, 20));
        label_8->setFont(font);
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 270, 751, 151));
        groupBox_4->setFont(font);
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 47, 13));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(700, 30, 47, 13));
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(210, 10, 61, 51));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 788, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Aeropuerto", Q_NULLPTR));
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Agregar", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Nombre", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Peso", Q_NULLPTR));
        BtnEncolar->setText(QApplication::translate("MainWindow", "Encolar", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Estado de la cola", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Maletas en cola:", Q_NULLPTR));
        lMaletasenCola->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Maletas entregadas:", Q_NULLPTR));
        lMaletasEntregadas->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Lista vacia?", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Check In", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Nombre del pasajero:", Q_NULLPTR));
        lNombrePas->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Peso de la maleta:", Q_NULLPTR));
        lPeso->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        BtnCheck->setText(QApplication::translate("MainWindow", "Check In", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "AEROPUERTO ", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "LINEA DE REVISION DE EQUIPAJE", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Cola de espera", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Entrada", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Salida", Q_NULLPTR));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
