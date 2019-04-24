/********************************************************************************
** Form generated from reading UI file 'villagerdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VILLAGERDISPLAY_H
#define UI_VILLAGERDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_villagerdisplay
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *villager_info;
    QTableWidget *villager_table;

    void setupUi(QWidget *villagerdisplay)
    {
        if (villagerdisplay->objectName().isEmpty())
            villagerdisplay->setObjectName(QString::fromUtf8("villagerdisplay"));
        villagerdisplay->resize(400, 300);
        gridLayout = new QGridLayout(villagerdisplay);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        villager_info = new QPlainTextEdit(villagerdisplay);
        villager_info->setObjectName(QString::fromUtf8("villager_info"));

        gridLayout->addWidget(villager_info, 0, 0, 1, 1);

        villager_table = new QTableWidget(villagerdisplay);
        villager_table->setObjectName(QString::fromUtf8("villager_table"));

        gridLayout->addWidget(villager_table, 1, 0, 1, 1);


        retranslateUi(villagerdisplay);

        QMetaObject::connectSlotsByName(villagerdisplay);
    } // setupUi

    void retranslateUi(QWidget *villagerdisplay)
    {
        villagerdisplay->setWindowTitle(QApplication::translate("villagerdisplay", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class villagerdisplay: public Ui_villagerdisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VILLAGERDISPLAY_H
