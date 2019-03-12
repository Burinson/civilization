/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Table
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *tableHeader;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Table)
    {
        if (Table->objectName().isEmpty())
            Table->setObjectName(QString::fromUtf8("Table"));
        Table->resize(415, 342);
        centralWidget = new QWidget(Table);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableHeader = new QPlainTextEdit(centralWidget);
        tableHeader->setObjectName(QString::fromUtf8("tableHeader"));

        gridLayout->addWidget(tableHeader, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        Table->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Table);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 415, 22));
        Table->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Table);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Table->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Table);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Table->setStatusBar(statusBar);

        retranslateUi(Table);

        QMetaObject::connectSlotsByName(Table);
    } // setupUi

    void retranslateUi(QMainWindow *Table)
    {
        Table->setWindowTitle(QApplication::translate("Table", "Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Table: public Ui_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
