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
        qDebug() << "[✔] Civilizations ordered by name";
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
