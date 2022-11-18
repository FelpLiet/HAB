/********************************************************************************
** Form generated from reading UI file 'tela_inicial.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_INICIAL_H
#define UI_TELA_INICIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_tela_inicial
{
public:

    void setupUi(QDialog *tela_inicial)
    {
        if (tela_inicial->objectName().isEmpty())
            tela_inicial->setObjectName("tela_inicial");
        tela_inicial->resize(400, 300);

        retranslateUi(tela_inicial);

        QMetaObject::connectSlotsByName(tela_inicial);
    } // setupUi

    void retranslateUi(QDialog *tela_inicial)
    {
        tela_inicial->setWindowTitle(QCoreApplication::translate("tela_inicial", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_inicial: public Ui_tela_inicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_INICIAL_H
