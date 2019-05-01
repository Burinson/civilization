#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/**
 * Set username
 */
void MainWindow::on_register_submit_clicked()
{
    QString username = ui->username_input->text();

    videogame.setUsername(username.toStdString());

    qDebug() << "[✔]" << username << "registered";
}
/**
 * Add civilization
 */
void MainWindow::on_add_civilization_input_clicked()
{
    QString name    = ui->name_input->text();
    int x           = ui->x_input->value();
    int y           = ui->y_input->value();
    int index       = ui->index_input->value();

    Civilization c;
    c.setName(name.toStdString());
    c.setX(x);
    c.setY(y);

    if(size_t(index) > videogame.total()) {
        QMessageBox::information(this, "Error", "Invalid position");
    } else {
        videogame.addCivilization(c, size_t(index));
        qDebug() << "[✔]" << name << x << y << "added at pos:" << index;
    }
}
/**
 * Create civilizations
 */
void MainWindow::on_create_civilizations_submit_clicked()
{
    QString name    = ui->name_input_2->text();
    int x           = ui->x_input_2->value();
    int y           = ui->y_input_2->value();
    int quantity    = ui->quantity_input->value();

    Civilization c;
    c.setName(name.toStdString());
    c.setX(x);
    c.setY(y);

    videogame.createCivilizations(c, size_t(quantity));

    qDebug() << "[✔]" << name << x << y << "initialized with:" << quantity;
}
/**
 * First civilization
 */
void MainWindow::on_first_civilization_submit_clicked()
{
    ui->first_civilization_display->clear();
    if (videogame.total() > 0) {
        Civilization c;
        c = videogame.firstCivilization();

        string name     = c.getName();
        int x           = c.getX();
        int y           = c.getY();

        QString name_s  = QString::fromStdString(name);
        QString x_s     = QString::number(x);
        QString y_s     = QString::number(y);

        ui->first_civilization_display->insertPlainText("Name: " + name_s + "\n");
        ui->first_civilization_display->insertPlainText("Position in x: " + x_s + "\n");
        ui->first_civilization_display->insertPlainText("Position in y: " + y_s + "\n \n");

        qDebug() << "[✔] Showing first civilization";
    } else {
        QMessageBox::information(this, "Error", "There are no civilizations to show");
    }
}
/**
 * Last civilization
 */
void MainWindow::on_last_civilization_submit_clicked()
{
    ui->last_civilization_display->clear();
    if (videogame.total() > 0) {
        Civilization c;
        c = videogame.lastCivilization();

        string name     = c.getName();
        int x           = c.getX();
        int y           = c.getY();

        QString name_s  = QString::fromStdString(name);
        QString x_s     = QString::number(x);
        QString y_s     = QString::number(y);

        ui->last_civilization_display->insertPlainText("Name: " + name_s + "\n");
        ui->last_civilization_display->insertPlainText("Position in x: " + x_s + "\n");
        ui->last_civilization_display->insertPlainText("Position in y: " + y_s + "\n \n");

        qDebug() << "[✔] Showing last civilization";
    } else {
        QMessageBox::information(this, "Error", "There are no civilizations to show");
    }
}
/**
 * Order civilizations
 */
void MainWindow::on_order_civilizations_submit_clicked()
{
    if (videogame.total() > 0) {
        videogame.sortCivilizations();
        qDebug() << "[✔] Civilizations ordered by x axis";
    } else {
        QMessageBox::information(this, "Error", "There are no civilizations to order");
    }
}
/**
 * Delete civilization
 */
void MainWindow::on_delete_civilization_submit_clicked()
{
    QString search = ui->delete_civilization_input->text();

    if (videogame.total() == 0) {
        QMessageBox::information(this, "Error", "There are no civilizations to delete");
    } else if (!videogame.deleteCivilization(search.toStdString())) {
        QMessageBox::information(this, "Error", "Civilization does not exist");
    } else {
        qDebug() << "[✔]" << search << "deleted";
    }
}
/**
 * Summary
 */
void MainWindow::on_summary_submit_clicked()
{
    table.show();
    table.setVideogame(videogame);
    qDebug() << "[✔] Showing summary";
}

/**
 * Search civilizations
 */
void MainWindow::on_search_civilization_input_clicked()
{
    QString search = ui->civilization_search_input->text();

    if (videogame.total() == 0) {
        flag = false;
        QMessageBox::information(this, "Error", "There are no civilizations to search");
    } else if (!videogame.civilizationExists(search.toStdString())) {
        flag = false;
        QMessageBox::information(this, "Error", "Civilization does not exist");
    } else {
        qDebug() << "[✔] Civilization found";
        flag = true;
    }
}

/**
 * Push villager to front
 */
void MainWindow::on_push_villager_front_clicked()
{
    if (flag) {
        Villager v;
        QString search = ui->civilization_search_input->text();
        Civilization* c = videogame.searchCivilization(search.toStdString());
        QString name = ui->villager_name_add->text();
        int age = ui->villager_age_add->value();
        QString gender = ui->villager_gender_add->text();
        int health = ui->villager_health_add->value();

        v.setNombre(name.toStdString());
        v.setEdad(age);
        v.setGender(gender.toStdString());
        v.setHealth(health);

        c->push_villager_front(v);
        qDebug() << "[✔] Villager pushed to front";
    } else {
        QMessageBox::information(this, "Error", "Civilization not found");
    }
}

/**
 * Push villager to back
 */
void MainWindow::on_push_villager_back_clicked()
{
    if (flag) {
        Villager v;
        QString search = ui->civilization_search_input->text();
        Civilization* c = videogame.searchCivilization(search.toStdString());
        QString name = ui->villager_name_add->text();
        int age = ui->villager_age_add->value();
        QString gender = ui->villager_gender_add->text();
        int health = ui->villager_health_add->value();

        v.setNombre(name.toStdString());
        v.setEdad(age);
        v.setGender(gender.toStdString());
        v.setHealth(health);

        c->push_villager_back(v);
        qDebug() << "[✔] Villager pushed to back";

    } else {
        QMessageBox::information(this, "Error", "Civilization not found");
    }
}

/**
 * Delete villager by name
 */
void MainWindow::on_delete_villager_name_submit_clicked()
{
    if (flag) {
        QString search = ui->civilization_search_input->text();
        Civilization* c = videogame.searchCivilization(search.toStdString());
        QString name = ui->villager_delete_name_input->text();

        if (c->villager_size() == 0) {
            QMessageBox::information(this, "Error", "There are no villagers to delete");
        } else if (!c->delete_villager(name.toStdString())) {
            QMessageBox::information(this, "Error", "Villager does not exist");
        } else {
            qDebug() << "[✔]" << "Unfortunate villager deleted";
        }

    } else
        QMessageBox::information(this, "Error", "Civilization not found");

}

/**
 * Delete villager by health
 */
void MainWindow::on_delete_villager_health_submit_clicked()
{
    if (flag) {
        QString search = ui->civilization_search_input->text();
        int health = ui->delete_villager_health_input->value();
        Civilization* c = videogame.searchCivilization(search.toStdString());

        if (c->villager_size() == 0) {
            QMessageBox::information(this, "Error", "There are no villagers to delete");
        } else if (!c->delete_villagers(health)) {
            QMessageBox::information(this, "Error", "There are no villagers below this health");
        } else {
            qDebug() << "[✔]" << "Sick villager deleted";
        }

    } else
        QMessageBox::information(this, "Error", "Civilization not found");

}
/**
 * Delete old villagers
 */
void MainWindow::on_delete_old_villagers_clicked()
{
    if (flag) {
        QString search = ui->civilization_search_input->text();
        Civilization* c = videogame.searchCivilization(search.toStdString());

        if (c->villager_size() == 0) {
            QMessageBox::information(this, "Error", "There are no villagers to delete");
        } else if (!c->delete_villager_age()) {
            QMessageBox::information(this, "Error", "There are no old villagers to delete");
        } else {
            qDebug() << "[✔]" << "Old villager deleted";
        }

    } else
        QMessageBox::information(this, "Error", "Civilization not found");
}

/**
 * Order villagers by name
 */
void MainWindow::on_order_villagers_name_submit_clicked()
{
    if (flag) {
        QString search = ui->civilization_search_input->text();
        Civilization* c = videogame.searchCivilization(search.toStdString());

        c->sort_villagers_name();
        qDebug() << "[✔]" << "Villagers sorted by name";

    } else
        QMessageBox::information(this, "Error", "Civilization not found");
}

/**
 * Order villagers by age
 */
void MainWindow::on_order_villagers_age_submit_clicked()
{
    if (flag) {
        QString search = ui->civilization_search_input->text();
        Civilization* c = videogame.searchCivilization(search.toStdString());

        c->sort_villagers_age();
        qDebug() << "[✔]" << "Villagers sorted by age";

    } else
        QMessageBox::information(this, "Error", "Civilization not found");
}

/**
 * Order villagers by health
 */
void MainWindow::on_order_villagers_by_health_clicked()
{
    if (flag) {
        QString search = ui->civilization_search_input->text();
        Civilization* c = videogame.searchCivilization(search.toStdString());

        c->sort_villagers_health();
        qDebug() << "[✔]" << "Villagers sorted by health";

    } else
        QMessageBox::information(this, "Error", "Civilization not found");
}

/**
 * Show villagers
 */
void MainWindow::on_show_villagers_input_clicked()
{
    if (flag) {
        QString search = ui->civilization_search_input->text();
        Civilization* c = videogame.searchCivilization(search.toStdString());

        villagerDisplay.show();
        villagerDisplay.setCivilization(c);
        qDebug() << "[✔] Showing villagers";

    } else
        QMessageBox::information(this, "Error", "Civilization not found");
}
/**
 * Save civilizations
 */
void MainWindow::on_save_input_clicked()
{
    videogame.save();
    qDebug() << "[✔] Civilizations saved";
}

/**
 * Recover civilizations
 */
void MainWindow::on_recover_input_clicked()
{
    videogame.recover();
    qDebug() << "[✔] Civilizations recovered";
}

/**
 * Capture ships
 */
void MainWindow::on_add_ship_clicked()
{
    if(flag) {
        Ship *s = new Ship();
        Civilization *c = videogame.searchCivilization(ui->civilization_search_input->text().toStdString());

        s->setId(ui->ship_id->text().toStdString());
        s->setFuel(ui->ship_fuel->value());
        c->addShip(s);

        qDebug() << "[✔] Ship added";
    } else
        QMessageBox::information(this, "Error", "Civilization not found");

}

/**
 * Show ships
 */
void MainWindow::on_showShips_clicked()
{
    if(flag) {
        Civilization *c = videogame.searchCivilization(ui->civilization_search_input->text().toStdString());

        shipdisplay.show();
        shipdisplay.setCivilization(c);
        qDebug() << "[✔] Showing ships";
    } else
        QMessageBox::information(this, "Error", "Civilization not found");
}

/**
 * Add warrior
 */
void MainWindow::on_addWarrior_clicked()
{
    if(flag) {
        Civilization *c = videogame.searchCivilization(ui->civilization_search_input->text().toStdString());
        string id = ui->id_search->text().toStdString();
        if (c->shipExists(id)) {
            Ship *s = c->getShip(id);

            Warrior w;
            w.setId(ui->warriorID->text().toStdString());
            w.setHealth(ui->warriorHealth->value());
            w.setStrength(ui->warriorStrength->value());
            w.setShield(ui->warriorShield->value());
            w.setType(ui->warriorType->currentText().toStdString());

            s->addWarrior(w);
            qDebug() << "[✔] Warrior added";

        } else
            QMessageBox::information(this, "Error", "Ship does not exist");

    } else
        QMessageBox::information(this, "Error", "Civilization not found");

}
