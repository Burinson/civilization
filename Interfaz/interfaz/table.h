#ifndef TABLE_H
#define TABLE_H

#include <QMainWindow>
#include <videogame.h>

namespace Ui {
class Table;
}

class Table : public QMainWindow
{
    Q_OBJECT

public:
    explicit Table(QWidget *parent = nullptr);
    ~Table();

    void setVideogame(VideoGame &videogame);

private:
    Ui::Table *ui;
};

#endif // TABLE_H
