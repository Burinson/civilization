#include "warriordisplay.h"
#include "ui_warriordisplay.h"
#include <stack>

WarriorDisplay::WarriorDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WarriorDisplay)
{
    ui->setupUi(this);
    ui->warriorTable->setColumnCount(4);
    QStringList headers;
    headers << "ID" << "Health" << "Strength" << "Shield";
    ui->warriorTable->setHorizontalHeaderLabels(headers);
}

WarriorDisplay::~WarriorDisplay()
{
    delete ui;
}

void WarriorDisplay::setShip(Ship *ship) const
{
    ui->warriorInfo->clear();
    string shipID = ship->getId();
    size_t size = ship->size();

    QString shipIDQ = QString::fromStdString(shipID);
    QString sizeQ = QString::number(size);

    ui->warriorInfo->insertPlainText("Ship ID: " + shipIDQ + "\n");
    ui->warriorInfo->insertPlainText("Number of warriors: " + sizeQ + "\n");

    ui->warriorTable->setRowCount(int(size));

    stack<Warrior> wCopy = ship->getWarriors();

    for(int i = 0; i < int(size); ++i) {
        QString id = QString::fromStdString(wCopy.top().getId());
        QString health = QString::number(wCopy.top().getHealth());
        QString strength = QString::number(wCopy.top().getStrength());
        QString shield = QString::number(wCopy.top().getShield());

        QTableWidgetItem *idItem = new QTableWidgetItem(id);
        QTableWidgetItem *healthItem = new QTableWidgetItem(health);
        QTableWidgetItem *strengthItem = new QTableWidgetItem(strength);
        QTableWidgetItem *shieldItem = new QTableWidgetItem(shield);

        ui->warriorTable->setItem(i, 0, idItem);
        ui->warriorTable->setItem(i, 1, healthItem);
        ui->warriorTable->setItem(i, 2, strengthItem);
        ui->warriorTable->setItem(i, 3, shieldItem);

        wCopy.pop();
    }
}
