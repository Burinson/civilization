#include "battlefielddisplay.h"
#include "ui_battlefielddisplay.h"

battlefielddisplay::battlefielddisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::battlefielddisplay)
{
    ui->setupUi(this);
    ui->battlefield_table->setColumnCount(5);
    QStringList headers;
    headers << "ID" << "Fuel" << "Speed" << "Shield" << "Warriors";
    ui->battlefield_table->setHorizontalHeaderLabels(headers);
}

battlefielddisplay::~battlefielddisplay()
{
    delete ui;
}

void battlefielddisplay::setCivilization(Civilization *civilizaition)
{
    size_t size = civilizaition->battlefieldSize();
    ui->battlefield_table->setRowCount(int(size));

    Civilization &c = *civilizaition;

    priority_queue<Ship*, vector<Ship*>, Ship::comp> copy = c.getBattlefield();

    int cnt = 0;
    while(!copy.empty()) {
        Ship *s = copy.top();

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

        ui->battlefield_table->setItem(cnt, 0, idItem);
        ui->battlefield_table->setItem(cnt, 1, fuelItem);
        ui->battlefield_table->setItem(cnt, 2, speedItem);
        ui->battlefield_table->setItem(cnt, 3, shieldItem);
        ui->battlefield_table->setItem(cnt, 4, warriorsItem);

        cnt++;

        copy.pop();
    }

}
