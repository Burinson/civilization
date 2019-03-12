/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionType_here;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *username_input;
    QPushButton *register_submit;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *name_input;
    QLabel *label_3;
    QSpinBox *x_input;
    QLabel *label_4;
    QSpinBox *y_input;
    QLabel *label_5;
    QSpinBox *index_input;
    QPushButton *add_civilization_input;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QPushButton *create_civilizations_submit;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *name_input_2;
    QSpinBox *quantity_input;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *x_input_2;
    QSpinBox *y_input_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_5;
    QPlainTextEdit *first_civilization_display;
    QPushButton *first_civilization_submit;
    QWidget *tab_5;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *last_civilization_display;
    QPushButton *last_civilization_submit;
    QWidget *tab_6;
    QGridLayout *gridLayout_7;
    QPushButton *order_civilizations_submit;
    QWidget *tab_7;
    QGridLayout *gridLayout_8;
    QLabel *label_10;
    QLineEdit *delete_civilization_input;
    QPushButton *delete_civilization_submit;
    QWidget *tab_8;
    QGridLayout *gridLayout_9;
    QPushButton *summary_submit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuRegister;
    QMenu *menuRecover;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(881, 376);
        actionType_here = new QAction(MainWindow);
        actionType_here->setObjectName(QString::fromUtf8("actionType_here"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        username_input = new QLineEdit(tab);
        username_input->setObjectName(QString::fromUtf8("username_input"));

        gridLayout_2->addWidget(username_input, 0, 1, 1, 1);

        register_submit = new QPushButton(tab);
        register_submit->setObjectName(QString::fromUtf8("register_submit"));

        gridLayout_2->addWidget(register_submit, 1, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        name_input = new QLineEdit(tab_2);
        name_input->setObjectName(QString::fromUtf8("name_input"));

        gridLayout_3->addWidget(name_input, 0, 1, 1, 1);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        x_input = new QSpinBox(tab_2);
        x_input->setObjectName(QString::fromUtf8("x_input"));
        x_input->setMinimum(-1000);
        x_input->setMaximum(1000);
        x_input->setValue(0);

        gridLayout_3->addWidget(x_input, 1, 1, 1, 1);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        y_input = new QSpinBox(tab_2);
        y_input->setObjectName(QString::fromUtf8("y_input"));
        y_input->setMinimum(-1000);
        y_input->setMaximum(1000);

        gridLayout_3->addWidget(y_input, 2, 1, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        index_input = new QSpinBox(tab_2);
        index_input->setObjectName(QString::fromUtf8("index_input"));
        index_input->setMaximum(10000);

        gridLayout_3->addWidget(index_input, 3, 1, 1, 1);

        add_civilization_input = new QPushButton(tab_2);
        add_civilization_input->setObjectName(QString::fromUtf8("add_civilization_input"));

        gridLayout_3->addWidget(add_civilization_input, 4, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        create_civilizations_submit = new QPushButton(tab_3);
        create_civilizations_submit->setObjectName(QString::fromUtf8("create_civilizations_submit"));

        gridLayout_4->addWidget(create_civilizations_submit, 4, 1, 1, 2);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        name_input_2 = new QLineEdit(tab_3);
        name_input_2->setObjectName(QString::fromUtf8("name_input_2"));

        gridLayout_4->addWidget(name_input_2, 1, 1, 1, 2);

        quantity_input = new QSpinBox(tab_3);
        quantity_input->setObjectName(QString::fromUtf8("quantity_input"));
        quantity_input->setMinimum(1);
        quantity_input->setMaximum(1000);

        gridLayout_4->addWidget(quantity_input, 0, 1, 1, 2);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 2, 0, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 3, 0, 1, 1);

        x_input_2 = new QSpinBox(tab_3);
        x_input_2->setObjectName(QString::fromUtf8("x_input_2"));
        x_input_2->setMinimum(-1000);
        x_input_2->setMaximum(1000);

        gridLayout_4->addWidget(x_input_2, 2, 1, 1, 2);

        y_input_2 = new QSpinBox(tab_3);
        y_input_2->setObjectName(QString::fromUtf8("y_input_2"));
        y_input_2->setMinimum(-1000);
        y_input_2->setMaximum(1000);

        gridLayout_4->addWidget(y_input_2, 3, 1, 1, 2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_5 = new QGridLayout(tab_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        first_civilization_display = new QPlainTextEdit(tab_4);
        first_civilization_display->setObjectName(QString::fromUtf8("first_civilization_display"));

        gridLayout_5->addWidget(first_civilization_display, 0, 0, 1, 1);

        first_civilization_submit = new QPushButton(tab_4);
        first_civilization_submit->setObjectName(QString::fromUtf8("first_civilization_submit"));

        gridLayout_5->addWidget(first_civilization_submit, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_6 = new QGridLayout(tab_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        last_civilization_display = new QPlainTextEdit(tab_5);
        last_civilization_display->setObjectName(QString::fromUtf8("last_civilization_display"));

        gridLayout_6->addWidget(last_civilization_display, 0, 0, 1, 1);

        last_civilization_submit = new QPushButton(tab_5);
        last_civilization_submit->setObjectName(QString::fromUtf8("last_civilization_submit"));

        gridLayout_6->addWidget(last_civilization_submit, 1, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_7 = new QGridLayout(tab_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        order_civilizations_submit = new QPushButton(tab_6);
        order_civilizations_submit->setObjectName(QString::fromUtf8("order_civilizations_submit"));

        gridLayout_7->addWidget(order_civilizations_submit, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_8 = new QGridLayout(tab_7);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_10 = new QLabel(tab_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_8->addWidget(label_10, 0, 0, 1, 1);

        delete_civilization_input = new QLineEdit(tab_7);
        delete_civilization_input->setObjectName(QString::fromUtf8("delete_civilization_input"));

        gridLayout_8->addWidget(delete_civilization_input, 0, 1, 1, 1);

        delete_civilization_submit = new QPushButton(tab_7);
        delete_civilization_submit->setObjectName(QString::fromUtf8("delete_civilization_submit"));

        gridLayout_8->addWidget(delete_civilization_submit, 1, 0, 1, 2);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_9 = new QGridLayout(tab_8);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        summary_submit = new QPushButton(tab_8);
        summary_submit->setObjectName(QString::fromUtf8("summary_submit"));

        gridLayout_9->addWidget(summary_submit, 0, 0, 1, 1);

        tabWidget->addTab(tab_8, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindow->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 881, 22));
        menuRegister = new QMenu(menuBar);
        menuRegister->setObjectName(QString::fromUtf8("menuRegister"));
        menuRecover = new QMenu(menuBar);
        menuRecover->setObjectName(QString::fromUtf8("menuRecover"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuRegister->menuAction());
        menuBar->addAction(menuRecover->menuAction());
        menuRegister->addSeparator();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionType_here->setText(QApplication::translate("MainWindow", "Type here", nullptr));
        label->setText(QApplication::translate("MainWindow", "Username:", nullptr));
        register_submit->setText(QApplication::translate("MainWindow", "Register", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Register", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Name:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Position in x:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Position in y:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Index:", nullptr));
        add_civilization_input->setText(QApplication::translate("MainWindow", "Add civilization", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Add ", nullptr));
        create_civilizations_submit->setText(QApplication::translate("MainWindow", "Create civilizations", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Quantity:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Name:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Position in x:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Position in y:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Create", nullptr));
        first_civilization_submit->setText(QApplication::translate("MainWindow", "View first civilization", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "First", nullptr));
        last_civilization_submit->setText(QApplication::translate("MainWindow", "View last civilization", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Last", nullptr));
        order_civilizations_submit->setText(QApplication::translate("MainWindow", "Order civilizations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Order", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Name:", nullptr));
        delete_civilization_submit->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "Delete", nullptr));
        summary_submit->setText(QApplication::translate("MainWindow", "See summary", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "Summary", nullptr));
        menuRegister->setTitle(QApplication::translate("MainWindow", "Save", nullptr));
        menuRecover->setTitle(QApplication::translate("MainWindow", "Recover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
