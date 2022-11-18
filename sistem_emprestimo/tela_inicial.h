#ifndef TELA_INICIAL_H
#define TELA_INICIAL_H

#include <QDialog>

namespace Ui {
class tela_inicial;
}

class tela_inicial : public QDialog
{
    Q_OBJECT

public:
    explicit tela_inicial(QWidget *parent = nullptr);
    ~tela_inicial();

private:
    Ui::tela_inicial *ui;
};

#endif // TELA_INICIAL_H
