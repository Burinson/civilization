#include "villagerdisplay.h"
#include "ui_villagerdisplay.h"

villagerdisplay::villagerdisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::villagerdisplay)
{
    ui->setupUi(this);
    ui->villager_table->setColumnCount(4);
    QStringList headers;
    headers << "Villager" << "Gender" << "Age" <<  "health";
    ui->villager_table->setHorizontalHeaderLabels(headers);
}

villagerdisplay::~villagerdisplay()
{
    delete ui;
}

void villagerdisplay::setCivilization(Civilization *civilization)
{
    ui->villager_info->clear();
    string civilization_name  = civilization->getName();
    size_t size = civilization->villager_size();

    QString civilization_name_q = QString::fromStdString(civilization_name);
    QString size_q              = QString::number(size);

    ui->villager_info->insertPlainText("Civilization: " + civilization_name_q + "\n");
    ui->villager_info->insertPlainText("Number of villages: " + size_q + "\n");

    ui->villager_table->setRowCount(int(civilization->villager_size()));

    for(size_t i = 0; i < civilization->villager_size(); ++i) {
        Civilization c = *civilization;
        Villager v = c[i];
        string name = v.getNombre();
        string gender = v.getGender();
        int age = v.getEdad();
        int health = v.getHealth();

        QString name_s = QString::fromStdString(name);
        QString gender_s = QString::fromStdString(gender);
        QString age_s = QString::number(age);
        QString health_s = QString::number(health);

        QTableWidgetItem *nameItem = new QTableWidgetItem(name_s);
        QTableWidgetItem *genderItem = new QTableWidgetItem(gender_s);
        QTableWidgetItem *ageItem = new QTableWidgetItem(age_s);
        QTableWidgetItem *healthItem = new QTableWidgetItem(health_s);

        ui->villager_table->setItem(i, 0, nameItem);
        ui->villager_table->setItem(i, 1, genderItem);
        ui->villager_table->setItem(i, 2, ageItem);
        ui->villager_table->setItem(i, 3, healthItem);

    }
}
