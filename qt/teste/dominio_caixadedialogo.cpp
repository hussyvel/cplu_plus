#include "dominio_caixadedialogo.h"
#include "ui_dominio_caixadedialogo.h"

CaixaDeDialogo::CaixaDeDialogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CaixaDeDialogo)
{
    ui->setupUi(this);
}

CaixaDeDialogo::~CaixaDeDialogo()
{
    delete ui;
}
