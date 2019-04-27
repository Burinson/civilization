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
    QAction *actionFile;
    QAction *actionSave;
    QAction *actionRecover;
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
    QWidget *tab_9;
    QGridLayout *gridLayout_10;
    QLabel *label_11;
    QPushButton *search_civilization_input;
    QLineEdit *civilization_search_input;
    QTabWidget *menu_options;
    QWidget *tab_10;
    QGridLayout *gridLayout_11;
    QLabel *label_12;
    QLineEdit *villager_name_add;
    QLabel *label_13;
    QSpinBox *villager_age_add;
    QLabel *label_14;
    QLineEdit *villager_gender_add;
    QLabel *label_15;
    QSpinBox *villager_health_add;
    QPushButton *push_villager_front;
    QPushButton *push_villager_back;
    QWidget *tab_11;
    QGridLayout *gridLayout_12;
    QTabWidget *tabWidget_2;
    QWidget *tab_16;
    QGridLayout *gridLayout_13;
    QLabel *label_16;
    QLineEdit *villager_delete_name_input;
    QPushButton *delete_villager_name_submit;
    QWidget *tab_14;
    QGridLayout *gridLayout_14;
    QLabel *label_17;
    QSpinBox *delete_villager_health_input;
    QPushButton *delete_villager_health_submit;
    QWidget *tab_15;
    QGridLayout *gridLayout_15;
    QPushButton *delete_old_villagers;
    QWidget *tab_12;
    QGridLayout *gridLayout_16;
    QPushButton *order_villagers_name_submit;
    QPushButton *order_villagers_age_submit;
    QPushButton *order_villagers_by_health;
    QWidget *tab_13;
    QGridLayout *gridLayout_17;
    QPushButton *show_villagers_input;
    QWidget *tab_17;
    QGridLayout *gridLayout_18;
    QPushButton *save_input;
    QWidget *tab_18;
    QGridLayout *gridLayout_19;
    QPushButton *recover_input;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuRegister;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(915, 554);
        actionType_here = new QAction(MainWindow);
        actionType_here->setObjectName(QString::fromUtf8("actionType_here"));
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionRecover = new QAction(MainWindow);
        actionRecover->setObjectName(QString::fromUtf8("actionRecover"));
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
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        gridLayout_10 = new QGridLayout(tab_9);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_11 = new QLabel(tab_9);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_10->addWidget(label_11, 0, 0, 1, 1);

        search_civilization_input = new QPushButton(tab_9);
        search_civilization_input->setObjectName(QString::fromUtf8("search_civilization_input"));

        gridLayout_10->addWidget(search_civilization_input, 1, 1, 1, 1);

        civilization_search_input = new QLineEdit(tab_9);
        civilization_search_input->setObjectName(QString::fromUtf8("civilization_search_input"));

        gridLayout_10->addWidget(civilization_search_input, 0, 1, 1, 1);

        menu_options = new QTabWidget(tab_9);
        menu_options->setObjectName(QString::fromUtf8("menu_options"));
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        gridLayout_11 = new QGridLayout(tab_10);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_12 = new QLabel(tab_10);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_11->addWidget(label_12, 0, 0, 1, 1);

        villager_name_add = new QLineEdit(tab_10);
        villager_name_add->setObjectName(QString::fromUtf8("villager_name_add"));

        gridLayout_11->addWidget(villager_name_add, 0, 1, 1, 1);

        label_13 = new QLabel(tab_10);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_11->addWidget(label_13, 1, 0, 1, 1);

        villager_age_add = new QSpinBox(tab_10);
        villager_age_add->setObjectName(QString::fromUtf8("villager_age_add"));

        gridLayout_11->addWidget(villager_age_add, 1, 1, 1, 1);

        label_14 = new QLabel(tab_10);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_11->addWidget(label_14, 2, 0, 1, 1);

        villager_gender_add = new QLineEdit(tab_10);
        villager_gender_add->setObjectName(QString::fromUtf8("villager_gender_add"));

        gridLayout_11->addWidget(villager_gender_add, 2, 1, 1, 1);

        label_15 = new QLabel(tab_10);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_11->addWidget(label_15, 3, 0, 1, 1);

        villager_health_add = new QSpinBox(tab_10);
        villager_health_add->setObjectName(QString::fromUtf8("villager_health_add"));

        gridLayout_11->addWidget(villager_health_add, 3, 1, 1, 1);

        push_villager_front = new QPushButton(tab_10);
        push_villager_front->setObjectName(QString::fromUtf8("push_villager_front"));

        gridLayout_11->addWidget(push_villager_front, 4, 1, 1, 1);

        push_villager_back = new QPushButton(tab_10);
        push_villager_back->setObjectName(QString::fromUtf8("push_villager_back"));

        gridLayout_11->addWidget(push_villager_back, 5, 1, 1, 1);

        menu_options->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        gridLayout_12 = new QGridLayout(tab_11);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        tabWidget_2 = new QTabWidget(tab_11);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_16 = new QWidget();
        tab_16->setObjectName(QString::fromUtf8("tab_16"));
        gridLayout_13 = new QGridLayout(tab_16);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_16 = new QLabel(tab_16);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_13->addWidget(label_16, 0, 0, 1, 1);

        villager_delete_name_input = new QLineEdit(tab_16);
        villager_delete_name_input->setObjectName(QString::fromUtf8("villager_delete_name_input"));

        gridLayout_13->addWidget(villager_delete_name_input, 0, 1, 1, 1);

        delete_villager_name_submit = new QPushButton(tab_16);
        delete_villager_name_submit->setObjectName(QString::fromUtf8("delete_villager_name_submit"));

        gridLayout_13->addWidget(delete_villager_name_submit, 1, 1, 1, 1);

        tabWidget_2->addTab(tab_16, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QString::fromUtf8("tab_14"));
        gridLayout_14 = new QGridLayout(tab_14);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_17 = new QLabel(tab_14);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_14->addWidget(label_17, 0, 0, 1, 1);

        delete_villager_health_input = new QSpinBox(tab_14);
        delete_villager_health_input->setObjectName(QString::fromUtf8("delete_villager_health_input"));
        delete_villager_health_input->setMaximum(100);

        gridLayout_14->addWidget(delete_villager_health_input, 0, 1, 1, 1);

        delete_villager_health_submit = new QPushButton(tab_14);
        delete_villager_health_submit->setObjectName(QString::fromUtf8("delete_villager_health_submit"));

        gridLayout_14->addWidget(delete_villager_health_submit, 1, 0, 1, 2);

        tabWidget_2->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QString::fromUtf8("tab_15"));
        gridLayout_15 = new QGridLayout(tab_15);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        delete_old_villagers = new QPushButton(tab_15);
        delete_old_villagers->setObjectName(QString::fromUtf8("delete_old_villagers"));

        gridLayout_15->addWidget(delete_old_villagers, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_15, QString());

        gridLayout_12->addWidget(tabWidget_2, 0, 1, 1, 1);

        menu_options->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        gridLayout_16 = new QGridLayout(tab_12);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        order_villagers_name_submit = new QPushButton(tab_12);
        order_villagers_name_submit->setObjectName(QString::fromUtf8("order_villagers_name_submit"));

        gridLayout_16->addWidget(order_villagers_name_submit, 0, 0, 1, 1);

        order_villagers_age_submit = new QPushButton(tab_12);
        order_villagers_age_submit->setObjectName(QString::fromUtf8("order_villagers_age_submit"));

        gridLayout_16->addWidget(order_villagers_age_submit, 1, 0, 1, 1);

        order_villagers_by_health = new QPushButton(tab_12);
        order_villagers_by_health->setObjectName(QString::fromUtf8("order_villagers_by_health"));

        gridLayout_16->addWidget(order_villagers_by_health, 2, 0, 1, 1);

        menu_options->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        gridLayout_17 = new QGridLayout(tab_13);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        show_villagers_input = new QPushButton(tab_13);
        show_villagers_input->setObjectName(QString::fromUtf8("show_villagers_input"));

        gridLayout_17->addWidget(show_villagers_input, 0, 0, 1, 1);

        menu_options->addTab(tab_13, QString());

        gridLayout_10->addWidget(menu_options, 2, 1, 1, 1);

        tabWidget->addTab(tab_9, QString());
        tab_17 = new QWidget();
        tab_17->setObjectName(QString::fromUtf8("tab_17"));
        gridLayout_18 = new QGridLayout(tab_17);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        save_input = new QPushButton(tab_17);
        save_input->setObjectName(QString::fromUtf8("save_input"));

        gridLayout_18->addWidget(save_input, 0, 0, 1, 1);

        tabWidget->addTab(tab_17, QString());
        tab_18 = new QWidget();
        tab_18->setObjectName(QString::fromUtf8("tab_18"));
        gridLayout_19 = new QGridLayout(tab_18);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        recover_input = new QPushButton(tab_18);
        recover_input->setObjectName(QString::fromUtf8("recover_input"));

        gridLayout_19->addWidget(recover_input, 0, 0, 1, 1);

        tabWidget->addTab(tab_18, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 915, 22));
        menuRegister = new QMenu(menuBar);
        menuRegister->setObjectName(QString::fromUtf8("menuRegister"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuRegister->menuAction());
        menuRegister->addSeparator();
        menuRegister->addAction(actionSave);
        menuRegister->addAction(actionRecover);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(10);
        menu_options->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Civilizations", nullptr));
        actionType_here->setText(QApplication::translate("MainWindow", "Type here", nullptr));
        actionFile->setText(QApplication::translate("MainWindow", "File", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionRecover->setText(QApplication::translate("MainWindow", "Recover", nullptr));
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
        label_11->setText(QApplication::translate("MainWindow", "Civilization name", nullptr));
        search_civilization_input->setText(QApplication::translate("MainWindow", "Search", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Name", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Age", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Gender", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Health", nullptr));
        push_villager_front->setText(QApplication::translate("MainWindow", "Push villager to front", nullptr));
        push_villager_back->setText(QApplication::translate("MainWindow", "Push villager to back", nullptr));
        menu_options->setTabText(menu_options->indexOf(tab_10), QApplication::translate("MainWindow", "Add villager", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Villager name:", nullptr));
        delete_villager_name_submit->setText(QApplication::translate("MainWindow", "Delete villager", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_16), QApplication::translate("MainWindow", "By name", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Health: ", nullptr));
        delete_villager_health_submit->setText(QApplication::translate("MainWindow", "Delete all villagers weaker than this", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_14), QApplication::translate("MainWindow", "By health", nullptr));
        delete_old_villagers->setText(QApplication::translate("MainWindow", "Delete villagers older than 60", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_15), QApplication::translate("MainWindow", "By age", nullptr));
        menu_options->setTabText(menu_options->indexOf(tab_11), QApplication::translate("MainWindow", "Delete villager", nullptr));
        order_villagers_name_submit->setText(QApplication::translate("MainWindow", "Order villagers by name", nullptr));
        order_villagers_age_submit->setText(QApplication::translate("MainWindow", "Order villagers by age", nullptr));
        order_villagers_by_health->setText(QApplication::translate("MainWindow", "Order villagers by health", nullptr));
        menu_options->setTabText(menu_options->indexOf(tab_12), QApplication::translate("MainWindow", "Order villagers", nullptr));
        show_villagers_input->setText(QApplication::translate("MainWindow", "Show villagers", nullptr));
        menu_options->setTabText(menu_options->indexOf(tab_13), QApplication::translate("MainWindow", "Show villagers", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "Search", nullptr));
        save_input->setText(QApplication::translate("MainWindow", "Save civilizations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_17), QApplication::translate("MainWindow", "Save", nullptr));
        recover_input->setText(QApplication::translate("MainWindow", "Recover civilizations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_18), QApplication::translate("MainWindow", "Recover", nullptr));
        menuRegister->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
