/********************************************************************************
** Form generated from reading UI file 'battlefielddisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLEFIELDDISPLAY_H
#define UI_BATTLEFIELDDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_battlefielddisplay
{
public:
    QGridLayout *gridLayout;
    QTableWidget *battlefield_table;

    void setupUi(QWidget *battlefielddisplay)
    {
        if (battlefielddisplay->objectName().isEmpty())
            battlefielddisplay->setObjectName(QString::fromUtf8("battlefielddisplay"));
        battlefielddisplay->resize(400, 300);
        gridLayout = new QGridLayout(battlefielddisplay);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        battlefield_table = new QTableWidget(battlefielddisplay);
        battlefield_table->setObjectName(QString::fromUtf8("battlefield_table"));

        gridLayout->addWidget(battlefield_table, 0, 0, 1, 1);


        retranslateUi(battlefielddisplay);

        QMetaObject::connectSlotsByName(battlefielddisplay);
    } // setupUi

    void retranslateUi(QWidget *battlefielddisplay)
    {
        battlefielddisplay->setWindowTitle(QApplication::translate("battlefielddisplay", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class battlefielddisplay: public Ui_battlefielddisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEFIELDDISPLAY_H
