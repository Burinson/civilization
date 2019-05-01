/********************************************************************************
** Form generated from reading UI file 'warriordisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARRIORDISPLAY_H
#define UI_WARRIORDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WarriorDisplay
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *warriorInfo;
    QTableWidget *warriorTable;

    void setupUi(QWidget *WarriorDisplay)
    {
        if (WarriorDisplay->objectName().isEmpty())
            WarriorDisplay->setObjectName(QString::fromUtf8("WarriorDisplay"));
        WarriorDisplay->resize(400, 300);
        gridLayout = new QGridLayout(WarriorDisplay);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        warriorInfo = new QPlainTextEdit(WarriorDisplay);
        warriorInfo->setObjectName(QString::fromUtf8("warriorInfo"));

        gridLayout->addWidget(warriorInfo, 0, 0, 1, 1);

        warriorTable = new QTableWidget(WarriorDisplay);
        warriorTable->setObjectName(QString::fromUtf8("warriorTable"));

        gridLayout->addWidget(warriorTable, 1, 0, 1, 1);


        retranslateUi(WarriorDisplay);

        QMetaObject::connectSlotsByName(WarriorDisplay);
    } // setupUi

    void retranslateUi(QWidget *WarriorDisplay)
    {
        WarriorDisplay->setWindowTitle(QApplication::translate("WarriorDisplay", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WarriorDisplay: public Ui_WarriorDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARRIORDISPLAY_H
