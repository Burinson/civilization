/********************************************************************************
** Form generated from reading UI file 'villagermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VILLAGERMENU_H
#define UI_VILLAGERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_villagerMenu
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *add_villager_front_submit;
    QLineEdit *villager_name_input;
    QLabel *label_4;
    QLineEdit *villager_gender_input;
    QLabel *label_2;
    QSpinBox *villager_age_input;
    QLabel *label;
    QSpinBox *villager_health_input;
    QPushButton *add_villager_back_submit;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QLabel *civilization_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *villagerMenu)
    {
        if (villagerMenu->objectName().isEmpty())
            villagerMenu->setObjectName(QString::fromUtf8("villagerMenu"));
        villagerMenu->resize(800, 600);
        centralwidget = new QWidget(villagerMenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        add_villager_front_submit = new QPushButton(tab);
        add_villager_front_submit->setObjectName(QString::fromUtf8("add_villager_front_submit"));

        gridLayout_2->addWidget(add_villager_front_submit, 4, 3, 1, 1);

        villager_name_input = new QLineEdit(tab);
        villager_name_input->setObjectName(QString::fromUtf8("villager_name_input"));

        gridLayout_2->addWidget(villager_name_input, 0, 3, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        villager_gender_input = new QLineEdit(tab);
        villager_gender_input->setObjectName(QString::fromUtf8("villager_gender_input"));

        gridLayout_2->addWidget(villager_gender_input, 2, 3, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        villager_age_input = new QSpinBox(tab);
        villager_age_input->setObjectName(QString::fromUtf8("villager_age_input"));
        villager_age_input->setMinimum(1);

        gridLayout_2->addWidget(villager_age_input, 1, 3, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        villager_health_input = new QSpinBox(tab);
        villager_health_input->setObjectName(QString::fromUtf8("villager_health_input"));

        gridLayout_2->addWidget(villager_health_input, 3, 3, 1, 1);

        add_villager_back_submit = new QPushButton(tab);
        add_villager_back_submit->setObjectName(QString::fromUtf8("add_villager_back_submit"));

        gridLayout_2->addWidget(add_villager_back_submit, 5, 3, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        civilization_label = new QLabel(centralwidget);
        civilization_label->setObjectName(QString::fromUtf8("civilization_label"));

        gridLayout->addWidget(civilization_label, 0, 0, 1, 1);

        villagerMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(villagerMenu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        villagerMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(villagerMenu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        villagerMenu->setStatusBar(statusbar);

        retranslateUi(villagerMenu);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(villagerMenu);
    } // setupUi

    void retranslateUi(QMainWindow *villagerMenu)
    {
        villagerMenu->setWindowTitle(QApplication::translate("villagerMenu", "Villager menu", nullptr));
        label_3->setText(QApplication::translate("villagerMenu", "Gender", nullptr));
        add_villager_front_submit->setText(QApplication::translate("villagerMenu", "Add villager to front", nullptr));
        label_4->setText(QApplication::translate("villagerMenu", "Health", nullptr));
        label_2->setText(QApplication::translate("villagerMenu", "Age", nullptr));
        label->setText(QApplication::translate("villagerMenu", "Name", nullptr));
        add_villager_back_submit->setText(QApplication::translate("villagerMenu", "Add villager to back", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("villagerMenu", "Add", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("villagerMenu", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("villagerMenu", "Sort", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("villagerMenu", "Show", nullptr));
        civilization_label->setText(QApplication::translate("villagerMenu", "Placeholder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class villagerMenu: public Ui_villagerMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VILLAGERMENU_H
