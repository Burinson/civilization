/********************************************************************************
** Form generated from reading UI file 'addvillager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVILLAGER_H
#define UI_ADDVILLAGER_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addVillager
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *villager_name;
    QLabel *label_2;
    QSpinBox *villager_age;
    QLabel *label_3;
    QLineEdit *villager_gender;
    QLabel *label_4;
    QSpinBox *villager_health;
    QPushButton *push_villager_front;
    QPushButton *push_villager_back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addVillager)
    {
        if (addVillager->objectName().isEmpty())
            addVillager->setObjectName(QString::fromUtf8("addVillager"));
        addVillager->resize(800, 600);
        centralwidget = new QWidget(addVillager);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        villager_name = new QLineEdit(centralwidget);
        villager_name->setObjectName(QString::fromUtf8("villager_name"));

        gridLayout->addWidget(villager_name, 0, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        villager_age = new QSpinBox(centralwidget);
        villager_age->setObjectName(QString::fromUtf8("villager_age"));

        gridLayout->addWidget(villager_age, 1, 2, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        villager_gender = new QLineEdit(centralwidget);
        villager_gender->setObjectName(QString::fromUtf8("villager_gender"));

        gridLayout->addWidget(villager_gender, 2, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        villager_health = new QSpinBox(centralwidget);
        villager_health->setObjectName(QString::fromUtf8("villager_health"));

        gridLayout->addWidget(villager_health, 3, 2, 1, 1);

        push_villager_front = new QPushButton(centralwidget);
        push_villager_front->setObjectName(QString::fromUtf8("push_villager_front"));

        gridLayout->addWidget(push_villager_front, 4, 0, 1, 3);

        push_villager_back = new QPushButton(centralwidget);
        push_villager_back->setObjectName(QString::fromUtf8("push_villager_back"));

        gridLayout->addWidget(push_villager_back, 5, 0, 1, 3);

        addVillager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addVillager);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        addVillager->setMenuBar(menubar);
        statusbar = new QStatusBar(addVillager);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        addVillager->setStatusBar(statusbar);

        retranslateUi(addVillager);

        QMetaObject::connectSlotsByName(addVillager);
    } // setupUi

    void retranslateUi(QMainWindow *addVillager)
    {
        addVillager->setWindowTitle(QApplication::translate("addVillager", "MainWindow", nullptr));
        label->setText(QApplication::translate("addVillager", "Name", nullptr));
        label_2->setText(QApplication::translate("addVillager", "Age", nullptr));
        label_3->setText(QApplication::translate("addVillager", "Gender", nullptr));
        label_4->setText(QApplication::translate("addVillager", "Health", nullptr));
        push_villager_front->setText(QApplication::translate("addVillager", "Push villager to front", nullptr));
        push_villager_back->setText(QApplication::translate("addVillager", "Push villager to back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addVillager: public Ui_addVillager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVILLAGER_H
