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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
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
    QLineEdit *civilization_search_input;
    QLabel *label_11;
    QPushButton *search_civilization_input;
    QTabWidget *tabWidget_3;
    QWidget *tab_19;
    QGridLayout *gridLayout_20;
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
    QWidget *tab_20;
    QGridLayout *gridLayout_21;
    QTabWidget *tabWidget_4;
    QWidget *tab_21;
    QGridLayout *gridLayout_23;
    QDoubleSpinBox *ship_fuel;
    QLineEdit *ship_id;
    QLabel *label_19;
    QLabel *label_18;
    QPushButton *add_ship;
    QWidget *tab_22;
    QGridLayout *gridLayout_24;
    QPushButton *showShips;
    QWidget *tab_23;
    QGridLayout *gridLayout_25;
    QLineEdit *id_search;
    QLabel *label_20;
    QTabWidget *tabWidget_6;
    QWidget *tab_27;
    QGridLayout *gridLayout_26;
    QLabel *label_21;
    QLineEdit *warriorID;
    QLabel *label_22;
    QLabel *label_23;
    QDoubleSpinBox *warriorStrength;
    QLabel *label_24;
    QDoubleSpinBox *warriorShield;
    QLabel *label_25;
    QComboBox *warriorType;
    QPushButton *addWarrior;
    QSpinBox *warriorHealth;
    QWidget *tab_28;
    QGridLayout *gridLayout_27;
    QPushButton *deleteWarrior;
    QWidget *tab_29;
    QGridLayout *gridLayout_28;
    QPlainTextEdit *topWarrior;
    QPushButton *lastWarrior;
    QWidget *tab_30;
    QGridLayout *gridLayout_29;
    QPushButton *showWarriors;
    QWidget *tab_24;
    QGridLayout *gridLayout_22;
    QTabWidget *tabWidget_5;
    QWidget *tab_25;
    QGridLayout *gridLayout_30;
    QLabel *label_26;
    QLineEdit *ship_id_delete;
    QPushButton *ship_id_delete_button;
    QWidget *tab_26;
    QGridLayout *gridLayout_31;
    QLabel *label_27;
    QDoubleSpinBox *ship_fuel_delete;
    QPushButton *ship_fuel_delete_button;
    QWidget *tab_31;
    QGridLayout *gridLayout_32;
    QTabWidget *tabWidget_7;
    QWidget *tab_32;
    QGridLayout *gridLayout_33;
    QLabel *label_28;
    QLineEdit *id_battle_ship_add;
    QLabel *label_29;
    QDoubleSpinBox *speed_battle_ship_add;
    QPushButton *add_ships_battle;
    QWidget *tab_33;
    QGridLayout *gridLayout_34;
    QLabel *label_30;
    QDoubleSpinBox *shield_battle_remove;
    QLabel *label_31;
    QDoubleSpinBox *fuel_battle_remove;
    QPushButton *battle_remove_ship;
    QWidget *tab_34;
    QGridLayout *gridLayout_35;
    QPushButton *show_battlefield;
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
        MainWindow->resize(915, 559);
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
        civilization_search_input = new QLineEdit(tab_9);
        civilization_search_input->setObjectName(QString::fromUtf8("civilization_search_input"));

        gridLayout_10->addWidget(civilization_search_input, 0, 1, 1, 1);

        label_11 = new QLabel(tab_9);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_10->addWidget(label_11, 0, 0, 1, 1);

        search_civilization_input = new QPushButton(tab_9);
        search_civilization_input->setObjectName(QString::fromUtf8("search_civilization_input"));

        gridLayout_10->addWidget(search_civilization_input, 1, 1, 1, 1);

        tabWidget_3 = new QTabWidget(tab_9);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tab_19 = new QWidget();
        tab_19->setObjectName(QString::fromUtf8("tab_19"));
        gridLayout_20 = new QGridLayout(tab_19);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        menu_options = new QTabWidget(tab_19);
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

        gridLayout_20->addWidget(menu_options, 0, 0, 1, 1);

        tabWidget_3->addTab(tab_19, QString());
        tab_20 = new QWidget();
        tab_20->setObjectName(QString::fromUtf8("tab_20"));
        gridLayout_21 = new QGridLayout(tab_20);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        tabWidget_4 = new QTabWidget(tab_20);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tab_21 = new QWidget();
        tab_21->setObjectName(QString::fromUtf8("tab_21"));
        gridLayout_23 = new QGridLayout(tab_21);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        ship_fuel = new QDoubleSpinBox(tab_21);
        ship_fuel->setObjectName(QString::fromUtf8("ship_fuel"));
        ship_fuel->setMaximum(100.000000000000000);

        gridLayout_23->addWidget(ship_fuel, 1, 1, 1, 1);

        ship_id = new QLineEdit(tab_21);
        ship_id->setObjectName(QString::fromUtf8("ship_id"));

        gridLayout_23->addWidget(ship_id, 0, 1, 1, 1);

        label_19 = new QLabel(tab_21);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_23->addWidget(label_19, 1, 0, 1, 1);

        label_18 = new QLabel(tab_21);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_23->addWidget(label_18, 0, 0, 1, 1);

        add_ship = new QPushButton(tab_21);
        add_ship->setObjectName(QString::fromUtf8("add_ship"));

        gridLayout_23->addWidget(add_ship, 2, 1, 1, 1);

        tabWidget_4->addTab(tab_21, QString());
        tab_22 = new QWidget();
        tab_22->setObjectName(QString::fromUtf8("tab_22"));
        gridLayout_24 = new QGridLayout(tab_22);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        showShips = new QPushButton(tab_22);
        showShips->setObjectName(QString::fromUtf8("showShips"));

        gridLayout_24->addWidget(showShips, 0, 0, 1, 1);

        tabWidget_4->addTab(tab_22, QString());
        tab_23 = new QWidget();
        tab_23->setObjectName(QString::fromUtf8("tab_23"));
        gridLayout_25 = new QGridLayout(tab_23);
        gridLayout_25->setSpacing(6);
        gridLayout_25->setContentsMargins(11, 11, 11, 11);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        id_search = new QLineEdit(tab_23);
        id_search->setObjectName(QString::fromUtf8("id_search"));

        gridLayout_25->addWidget(id_search, 0, 1, 1, 1);

        label_20 = new QLabel(tab_23);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_25->addWidget(label_20, 0, 0, 1, 1);

        tabWidget_6 = new QTabWidget(tab_23);
        tabWidget_6->setObjectName(QString::fromUtf8("tabWidget_6"));
        tab_27 = new QWidget();
        tab_27->setObjectName(QString::fromUtf8("tab_27"));
        gridLayout_26 = new QGridLayout(tab_27);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        label_21 = new QLabel(tab_27);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_26->addWidget(label_21, 0, 0, 1, 1);

        warriorID = new QLineEdit(tab_27);
        warriorID->setObjectName(QString::fromUtf8("warriorID"));

        gridLayout_26->addWidget(warriorID, 0, 1, 1, 2);

        label_22 = new QLabel(tab_27);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_26->addWidget(label_22, 1, 0, 1, 1);

        label_23 = new QLabel(tab_27);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_26->addWidget(label_23, 2, 0, 1, 1);

        warriorStrength = new QDoubleSpinBox(tab_27);
        warriorStrength->setObjectName(QString::fromUtf8("warriorStrength"));
        warriorStrength->setMaximum(60.000000000000000);

        gridLayout_26->addWidget(warriorStrength, 2, 1, 1, 2);

        label_24 = new QLabel(tab_27);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_26->addWidget(label_24, 3, 0, 1, 1);

        warriorShield = new QDoubleSpinBox(tab_27);
        warriorShield->setObjectName(QString::fromUtf8("warriorShield"));
        warriorShield->setMaximum(30.000000000000000);

        gridLayout_26->addWidget(warriorShield, 3, 1, 1, 2);

        label_25 = new QLabel(tab_27);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_26->addWidget(label_25, 4, 0, 1, 1);

        warriorType = new QComboBox(tab_27);
        warriorType->addItem(QString());
        warriorType->addItem(QString());
        warriorType->addItem(QString());
        warriorType->addItem(QString());
        warriorType->setObjectName(QString::fromUtf8("warriorType"));

        gridLayout_26->addWidget(warriorType, 4, 1, 1, 2);

        addWarrior = new QPushButton(tab_27);
        addWarrior->setObjectName(QString::fromUtf8("addWarrior"));

        gridLayout_26->addWidget(addWarrior, 5, 1, 1, 2);

        warriorHealth = new QSpinBox(tab_27);
        warriorHealth->setObjectName(QString::fromUtf8("warriorHealth"));
        warriorHealth->setMaximum(100);

        gridLayout_26->addWidget(warriorHealth, 1, 1, 1, 2);

        tabWidget_6->addTab(tab_27, QString());
        tab_28 = new QWidget();
        tab_28->setObjectName(QString::fromUtf8("tab_28"));
        gridLayout_27 = new QGridLayout(tab_28);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        deleteWarrior = new QPushButton(tab_28);
        deleteWarrior->setObjectName(QString::fromUtf8("deleteWarrior"));

        gridLayout_27->addWidget(deleteWarrior, 0, 0, 1, 1);

        tabWidget_6->addTab(tab_28, QString());
        tab_29 = new QWidget();
        tab_29->setObjectName(QString::fromUtf8("tab_29"));
        gridLayout_28 = new QGridLayout(tab_29);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        topWarrior = new QPlainTextEdit(tab_29);
        topWarrior->setObjectName(QString::fromUtf8("topWarrior"));

        gridLayout_28->addWidget(topWarrior, 0, 0, 1, 1);

        lastWarrior = new QPushButton(tab_29);
        lastWarrior->setObjectName(QString::fromUtf8("lastWarrior"));

        gridLayout_28->addWidget(lastWarrior, 1, 0, 1, 1);

        tabWidget_6->addTab(tab_29, QString());
        tab_30 = new QWidget();
        tab_30->setObjectName(QString::fromUtf8("tab_30"));
        gridLayout_29 = new QGridLayout(tab_30);
        gridLayout_29->setSpacing(6);
        gridLayout_29->setContentsMargins(11, 11, 11, 11);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        showWarriors = new QPushButton(tab_30);
        showWarriors->setObjectName(QString::fromUtf8("showWarriors"));

        gridLayout_29->addWidget(showWarriors, 0, 0, 1, 1);

        tabWidget_6->addTab(tab_30, QString());

        gridLayout_25->addWidget(tabWidget_6, 1, 0, 1, 2);

        tabWidget_4->addTab(tab_23, QString());
        tab_24 = new QWidget();
        tab_24->setObjectName(QString::fromUtf8("tab_24"));
        gridLayout_22 = new QGridLayout(tab_24);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        tabWidget_5 = new QTabWidget(tab_24);
        tabWidget_5->setObjectName(QString::fromUtf8("tabWidget_5"));
        tab_25 = new QWidget();
        tab_25->setObjectName(QString::fromUtf8("tab_25"));
        gridLayout_30 = new QGridLayout(tab_25);
        gridLayout_30->setSpacing(6);
        gridLayout_30->setContentsMargins(11, 11, 11, 11);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        label_26 = new QLabel(tab_25);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_30->addWidget(label_26, 0, 0, 1, 1);

        ship_id_delete = new QLineEdit(tab_25);
        ship_id_delete->setObjectName(QString::fromUtf8("ship_id_delete"));

        gridLayout_30->addWidget(ship_id_delete, 0, 1, 1, 1);

        ship_id_delete_button = new QPushButton(tab_25);
        ship_id_delete_button->setObjectName(QString::fromUtf8("ship_id_delete_button"));

        gridLayout_30->addWidget(ship_id_delete_button, 1, 0, 1, 2);

        tabWidget_5->addTab(tab_25, QString());
        tab_26 = new QWidget();
        tab_26->setObjectName(QString::fromUtf8("tab_26"));
        gridLayout_31 = new QGridLayout(tab_26);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        label_27 = new QLabel(tab_26);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_31->addWidget(label_27, 0, 0, 1, 1);

        ship_fuel_delete = new QDoubleSpinBox(tab_26);
        ship_fuel_delete->setObjectName(QString::fromUtf8("ship_fuel_delete"));
        ship_fuel_delete->setMaximum(100.000000000000000);

        gridLayout_31->addWidget(ship_fuel_delete, 0, 1, 1, 1);

        ship_fuel_delete_button = new QPushButton(tab_26);
        ship_fuel_delete_button->setObjectName(QString::fromUtf8("ship_fuel_delete_button"));

        gridLayout_31->addWidget(ship_fuel_delete_button, 1, 0, 1, 2);

        tabWidget_5->addTab(tab_26, QString());

        gridLayout_22->addWidget(tabWidget_5, 0, 0, 1, 1);

        tabWidget_4->addTab(tab_24, QString());

        gridLayout_21->addWidget(tabWidget_4, 0, 0, 1, 1);

        tabWidget_3->addTab(tab_20, QString());
        tab_31 = new QWidget();
        tab_31->setObjectName(QString::fromUtf8("tab_31"));
        gridLayout_32 = new QGridLayout(tab_31);
        gridLayout_32->setSpacing(6);
        gridLayout_32->setContentsMargins(11, 11, 11, 11);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        tabWidget_7 = new QTabWidget(tab_31);
        tabWidget_7->setObjectName(QString::fromUtf8("tabWidget_7"));
        tab_32 = new QWidget();
        tab_32->setObjectName(QString::fromUtf8("tab_32"));
        gridLayout_33 = new QGridLayout(tab_32);
        gridLayout_33->setSpacing(6);
        gridLayout_33->setContentsMargins(11, 11, 11, 11);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        label_28 = new QLabel(tab_32);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_33->addWidget(label_28, 0, 0, 1, 1);

        id_battle_ship_add = new QLineEdit(tab_32);
        id_battle_ship_add->setObjectName(QString::fromUtf8("id_battle_ship_add"));

        gridLayout_33->addWidget(id_battle_ship_add, 0, 1, 1, 1);

        label_29 = new QLabel(tab_32);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_33->addWidget(label_29, 1, 0, 1, 1);

        speed_battle_ship_add = new QDoubleSpinBox(tab_32);
        speed_battle_ship_add->setObjectName(QString::fromUtf8("speed_battle_ship_add"));

        gridLayout_33->addWidget(speed_battle_ship_add, 1, 1, 1, 1);

        add_ships_battle = new QPushButton(tab_32);
        add_ships_battle->setObjectName(QString::fromUtf8("add_ships_battle"));

        gridLayout_33->addWidget(add_ships_battle, 2, 1, 1, 1);

        tabWidget_7->addTab(tab_32, QString());
        tab_33 = new QWidget();
        tab_33->setObjectName(QString::fromUtf8("tab_33"));
        gridLayout_34 = new QGridLayout(tab_33);
        gridLayout_34->setSpacing(6);
        gridLayout_34->setContentsMargins(11, 11, 11, 11);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        label_30 = new QLabel(tab_33);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_34->addWidget(label_30, 0, 0, 1, 1);

        shield_battle_remove = new QDoubleSpinBox(tab_33);
        shield_battle_remove->setObjectName(QString::fromUtf8("shield_battle_remove"));

        gridLayout_34->addWidget(shield_battle_remove, 0, 1, 1, 1);

        label_31 = new QLabel(tab_33);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_34->addWidget(label_31, 1, 0, 1, 1);

        fuel_battle_remove = new QDoubleSpinBox(tab_33);
        fuel_battle_remove->setObjectName(QString::fromUtf8("fuel_battle_remove"));

        gridLayout_34->addWidget(fuel_battle_remove, 1, 1, 1, 1);

        battle_remove_ship = new QPushButton(tab_33);
        battle_remove_ship->setObjectName(QString::fromUtf8("battle_remove_ship"));

        gridLayout_34->addWidget(battle_remove_ship, 2, 0, 1, 3);

        tabWidget_7->addTab(tab_33, QString());
        tab_34 = new QWidget();
        tab_34->setObjectName(QString::fromUtf8("tab_34"));
        gridLayout_35 = new QGridLayout(tab_34);
        gridLayout_35->setSpacing(6);
        gridLayout_35->setContentsMargins(11, 11, 11, 11);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        show_battlefield = new QPushButton(tab_34);
        show_battlefield->setObjectName(QString::fromUtf8("show_battlefield"));

        gridLayout_35->addWidget(show_battlefield, 0, 0, 1, 1);

        tabWidget_7->addTab(tab_34, QString());

        gridLayout_32->addWidget(tabWidget_7, 0, 0, 1, 1);

        tabWidget_3->addTab(tab_31, QString());

        gridLayout_10->addWidget(tabWidget_3, 2, 1, 1, 1);

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

        tabWidget->setCurrentIndex(8);
        tabWidget_3->setCurrentIndex(2);
        menu_options->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(2);
        tabWidget_4->setCurrentIndex(0);
        tabWidget_6->setCurrentIndex(3);
        tabWidget_5->setCurrentIndex(0);
        tabWidget_7->setCurrentIndex(2);


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
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_19), QApplication::translate("MainWindow", "Villagers", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "Fuel", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Id", nullptr));
        add_ship->setText(QApplication::translate("MainWindow", "Add ship", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_21), QApplication::translate("MainWindow", "Add ship", nullptr));
        showShips->setText(QApplication::translate("MainWindow", "Show ships", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_22), QApplication::translate("MainWindow", "Show ships", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "Ship ID: ", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "ID:", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Health:", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Strength:", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "Shield:", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Type:", nullptr));
        warriorType->setItemText(0, QApplication::translate("MainWindow", "Thrower", nullptr));
        warriorType->setItemText(1, QApplication::translate("MainWindow", "Paladin", nullptr));
        warriorType->setItemText(2, QApplication::translate("MainWindow", "Knight", nullptr));
        warriorType->setItemText(3, QApplication::translate("MainWindow", "Archer", nullptr));

        addWarrior->setText(QApplication::translate("MainWindow", "Add warrior", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_27), QApplication::translate("MainWindow", "Add warrior", nullptr));
        deleteWarrior->setText(QApplication::translate("MainWindow", "Delete warrior", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_28), QApplication::translate("MainWindow", "Delete warrior", nullptr));
        lastWarrior->setText(QApplication::translate("MainWindow", "Show last warrior", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_29), QApplication::translate("MainWindow", "Show last warrior", nullptr));
        showWarriors->setText(QApplication::translate("MainWindow", "Show warriors", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_30), QApplication::translate("MainWindow", "Show all warriors", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_23), QApplication::translate("MainWindow", "Search ships", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Ship ID:", nullptr));
        ship_id_delete_button->setText(QApplication::translate("MainWindow", "Delete ship", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_25), QApplication::translate("MainWindow", "By id", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "Fuel:", nullptr));
        ship_fuel_delete_button->setText(QApplication::translate("MainWindow", "Delete all ships with less fuel than this", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_26), QApplication::translate("MainWindow", "By fuel", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_24), QApplication::translate("MainWindow", "Delete ships", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_20), QApplication::translate("MainWindow", "Ships", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "ID:", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "Speed", nullptr));
        add_ships_battle->setText(QApplication::translate("MainWindow", "Add ship to battle", nullptr));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_32), QApplication::translate("MainWindow", "Add ship", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "Shield", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "Fuel", nullptr));
        battle_remove_ship->setText(QApplication::translate("MainWindow", "Remove fastest ship", nullptr));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_33), QApplication::translate("MainWindow", "Remove ship", nullptr));
        show_battlefield->setText(QApplication::translate("MainWindow", "Show battlefield", nullptr));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_34), QApplication::translate("MainWindow", "Show ships", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_31), QApplication::translate("MainWindow", "Battle", nullptr));
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
