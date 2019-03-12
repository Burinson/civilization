#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "videogame.h"
#include "table.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_register_submit_clicked();

    void on_add_civilization_input_clicked();

    void on_create_civilizations_submit_clicked();

    void on_first_civilization_submit_clicked();

    void on_last_civilization_submit_clicked();

    void on_order_civilizations_submit_clicked();

    void on_delete_civilization_submit_clicked();

    void on_summary_submit_clicked();

private:
    Ui::MainWindow *ui;
    VideoGame videogame;
    Table table;
};

#endif // MAINWINDOW_H
