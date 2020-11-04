#ifndef TESTEDOIS_H
#define TESTEDOIS_H


class TesteDois
{
public:
    TesteDois();
};


namespace Vendas {
    class BonificacaoCodigoBin;
}

namespace UI {
    class ViewDefinicaoBonificacaoCartaoBin;
}

class UWTreeWidgetItem;

class ViewDefinicaoBonificacaoCartaoBin : public UWWidgetForm {
    Q_OBJECT

public:
    Q_INVOKABLE explicit ViewDefinicaoBonificacaoCartaoBin (UWWidgetForm *parent = nullptr);
    Q_INVOKABLE ~ViewDefinicaoBonificacaoCartaoBin();

    long long idBonificacao() const;
    void setIdBonificacao (long long idBonificacao);

private:
    void configureGrid();
    void carregarGrid();

private slots:
    void doConnect();
    void onTreeGetTextItens(UWTreeWidgetItem*item);
    void on_uwGrid_itemChange (QTreeWidgetItem *item, int column);

private:
    Ui::ViewDefinicaoBonificacaoCartaoBin *ui;
    QList<Vendas::BonificacaoCodigoBin*> _listModel;

    void carregar();

    QList<Vendas::BonificacaoCodigoBin*> _listModel;
    long long _idBonificacao;
    bool initEdition = false;

};

#endif // TESTEDOIS_H
