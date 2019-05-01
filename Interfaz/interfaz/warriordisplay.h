#ifndef WARRIORDISPLAY_H
#define WARRIORDISPLAY_H

#include <QWidget>
#include "ship.h"
namespace Ui {
class WarriorDisplay;
}

class WarriorDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit WarriorDisplay(QWidget *parent = nullptr);
    ~WarriorDisplay();
    void setShip(Ship *ship) const;

private:
    Ui::WarriorDisplay *ui;
};

#endif // WARRIORDISPLAY_H
