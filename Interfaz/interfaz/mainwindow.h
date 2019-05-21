#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "videogame.h"
#include "table.h"
#include "villagerdisplay.h"
#include "shipdisplay.h"
#include "warriordisplay.h"
#include "battlefielddisplay.h"

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

    void on_search_civilization_input_clicked();

    void on_push_villager_front_clicked();

    void on_push_villager_back_clicked();

    void on_delete_villager_name_submit_clicked();

    void on_delete_villager_health_submit_clicked();

    void on_delete_old_villagers_clicked();

    void on_order_villagers_name_submit_clicked();

    void on_order_villagers_age_submit_clicked();

    void on_order_villagers_by_health_clicked();

    void on_show_villagers_input_clicked();

    void on_save_input_clicked();

    void on_recover_input_clicked();

    void on_add_ship_clicked();

    void on_showShips_clicked();

    void on_addWarrior_clicked();

    void on_deleteWarrior_clicked();

    void on_lastWarrior_clicked();

    void on_showWarriors_clicked();

    void on_ship_id_delete_button_clicked();

    void on_ship_fuel_delete_button_clicked();

    void on_add_ships_battle_clicked();

    void on_battle_remove_ship_clicked();

    void on_show_battlefield_clicked();

private:
    Ui::MainWindow *ui;
    VideoGame videogame;
    Table table;
    villagerdisplay villagerDisplay;
    ShipDisplay shipdisplay;
    WarriorDisplay warriordisplay;
    battlefielddisplay battleFieldDisplay;
    bool flag = false;
};

#endif // MAINWINDOW_H
