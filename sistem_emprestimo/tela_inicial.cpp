#include "tela_inicial.h"
#include "ui_tela_inicial.h"

tela_inicial::tela_inicial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_inicial)
{
    ui->setupUi(this);
}

tela_inicial::~tela_inicial()
{
    delete ui;
}
