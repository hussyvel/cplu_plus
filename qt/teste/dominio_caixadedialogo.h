#ifndef DOMINIO_CAIXADEDIALOGO_H
#define DOMINIO_CAIXADEDIALOGO_H

#include <QDialog>

namespace Ui {
class CaixaDeDialogo;
}

class CaixaDeDialogo : public QDialog
{
    Q_OBJECT

public:
    explicit CaixaDeDialogo(QWidget *parent = nullptr);
    ~CaixaDeDialogo();

private:
    Ui::CaixaDeDialogo *ui;
};

#endif // DOMINIO_CAIXADEDIALOGO_H
