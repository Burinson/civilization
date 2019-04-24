#include "table.h"
#include "ui_table.h"

Table::Table(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Table)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    QStringList headers;
    headers << "Civilization" << "Position in x" << "Position in y";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
}

Table::~Table()
{
    delete ui;
}

void Table::setVideogame(VideoGame &videogame)
{
    ui->tableHeader->clear();
    string username     = videogame.getUsername();
    size_t size         = videogame.total();

    QString username_q  = QString::fromStdString(username);
    QString size_q      = QString::number(size);

    ui->tableHeader->insertPlainText("Username: " + username_q + "\n");
    ui->tableHeader->insertPlainText("Number of civilizations: " + size_q + "\n");

    ui->tableWidget->setRowCount(int(videogame.total()));

    for (size_t i = 0; i < videogame.total(); ++i) {
        Civilization &c = videogame[i];

        string name = c.getName();
        int x       = c.getX();
        int y       = c.getY();

        QString name_s = QString::fromStdString(name);
        QString x_s    = QString::number(x);
        QString y_s    = QString::number(y);

        QTableWidgetItem *nameItem  = new QTableWidgetItem(name_s);
        QTableWidgetItem *xItem     = new QTableWidgetItem(x_s);
        QTableWidgetItem *yItem     = new QTableWidgetItem(y_s);

        ui->tableWidget->setItem(i, 0, nameItem);
        ui->tableWidget->setItem(i, 1, xItem);
        ui->tableWidget->setItem(i, 2, yItem);
    }
}
