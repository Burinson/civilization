#include "shipdisplay.h"
#include "ui_shipdisplay.h"

ShipDisplay::ShipDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShipDisplay)
{
    ui->setupUi(this);
    ui->shipTable->setColumnCount(5);
    QStringList headers;
    headers << "ID" << "Fuel" << "Speed" << "Shield" << "Warriors";
    ui->shipTable->setHorizontalHeaderLabels(headers);
}

ShipDisplay::~ShipDisplay()
{
    delete ui;
}

void ShipDisplay::setCivilization(Civilization *civilization)
{
    ui->shipInfo->clear();
    string civName = civilization->getName();
    size_t size = civilization->shipSize();

    QString civNameQ = QString::fromStdString(civName);
    QString sizeQ = QString::number(size);

    ui->shipInfo->insertPlainText("Civilization: " + civNameQ);
    ui->shipInfo->insertPlainText("Number of ships: " + sizeQ);

    ui->shipTable->setRowCount(int(size));

    for(int i = 0; i < int(size); ++i) {
        Civilization c = *civilization;
        Ship *s = c[i];

        QString id = QString::fromStdString(s->getId());
        QString fuel = QString::number(s->getFuel());
        QString speed = QString::number(s->getSpeed());
        QString shield = QString::number(s->getShield());
        QString warriors = QString::number(s->size());

        QTableWidgetItem *idItem = new QTableWidgetItem(id);
        QTableWidgetItem *fuelItem = new QTableWidgetItem(fuel);
        QTableWidgetItem *speedItem = new QTableWidgetItem(speed);
        QTableWidgetItem *shieldItem = new QTableWidgetItem(shield);
        QTableWidgetItem *warriorsItem = new QTableWidgetItem(warriors);

        ui->shipTable->setItem(i, 0, idItem);
        ui->shipTable->setItem(i, 1, fuelItem);
        ui->shipTable->setItem(i, 2, speedItem);
        ui->shipTable->setItem(i, 3, shieldItem);
        ui->shipTable->setItem(i, 4, warriorsItem);
    }
}
