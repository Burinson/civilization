/********************************************************************************
** Form generated from reading UI file 'shipdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIPDISPLAY_H
#define UI_SHIPDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShipDisplay
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *shipInfo;
    QTableWidget *shipTable;

    void setupUi(QWidget *ShipDisplay)
    {
        if (ShipDisplay->objectName().isEmpty())
            ShipDisplay->setObjectName(QString::fromUtf8("ShipDisplay"));
        ShipDisplay->resize(400, 300);
        gridLayout = new QGridLayout(ShipDisplay);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        shipInfo = new QPlainTextEdit(ShipDisplay);
        shipInfo->setObjectName(QString::fromUtf8("shipInfo"));

        gridLayout->addWidget(shipInfo, 0, 0, 1, 1);

        shipTable = new QTableWidget(ShipDisplay);
        shipTable->setObjectName(QString::fromUtf8("shipTable"));

        gridLayout->addWidget(shipTable, 1, 0, 1, 1);


        retranslateUi(ShipDisplay);

        QMetaObject::connectSlotsByName(ShipDisplay);
    } // setupUi

    void retranslateUi(QWidget *ShipDisplay)
    {
        ShipDisplay->setWindowTitle(QApplication::translate("ShipDisplay", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShipDisplay: public Ui_ShipDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIPDISPLAY_H
