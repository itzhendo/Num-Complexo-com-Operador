#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::Adicionar()
{
    int real = ui->lineEditParteRealN1->text().toInt();
    int imaginario = ui->lineEditParteImaginariaN1->text().toInt();
    NComplexo n1;
    n1.set(real, imaginario);
    real = ui->lineEditParteRealN2->text().toInt();
    imaginario = ui->lineEditParteImaginariaN2->text().toInt();
    NComplexo n2(real, imaginario);
    NComplexo aux;
    aux = n1+n2;
    QString saida = "Calculo = " + aux.get();
    ui->lineEditSaida->setText(saida);

}

void MainWindow::Subtrair()
{
    int real = ui->lineEditParteRealN1->text().toInt();
    int imaginario = ui->lineEditParteImaginariaN1->text().toInt();
    NComplexo n1;
    n1.set(real, imaginario);
    real = ui->lineEditParteRealN2->text().toInt();
    imaginario = ui->lineEditParteImaginariaN2->text().toInt();
    NComplexo n2(real, imaginario);
    NComplexo aux;
    aux = n1-n2;
    QString saida = "Calculo = " + aux.get();
    ui->lineEditSaida->setText(saida);

}

void MainWindow::Multiplicar()
{
    int real = ui->lineEditParteRealN1->text().toInt();
    int imaginario = ui->lineEditParteImaginariaN1->text().toInt();
    NComplexo n1;
    n1.set(real, imaginario);
    real = ui->lineEditParteRealN2->text().toInt();
    imaginario = ui->lineEditParteImaginariaN2->text().toInt();
    NComplexo n2(real, imaginario);
    NComplexo aux;
    aux = n1*n2;
    QString saida = "Calculo = " + aux.get();
    ui->lineEditSaida->setText(saida);
}

void MainWindow::Dividir()
{
    int real = ui->lineEditParteRealN1->text().toInt();
    int imaginario = ui->lineEditParteImaginariaN1->text().toInt();
    NComplexo n1;
    n1.set(real, imaginario);
    real = ui->lineEditParteRealN2->text().toInt();
    imaginario = ui->lineEditParteImaginariaN2->text().toInt();
    NComplexo n2(real, imaginario);
    NComplexo aux;
    aux = n1/n2;
    QString saida = "Calculo = " + aux.get();
    ui->lineEditSaida->setText(saida);

}
void MainWindow::on_pushButtonCalcular_clicked()
{
        if(ui->comboBox->currentIndex()==0)
        {
            Adicionar();
        }
        else
        if(ui->comboBox->currentIndex()==1)
        {
             Subtrair();
        }
        else
        if(ui->comboBox->currentIndex()==2)
        {
             Multiplicar();
        }
        else
        if(ui->comboBox->currentIndex()==3)
        {
            Dividir();
        }

}
