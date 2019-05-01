#ifndef SHIPDISPLAY_H
#define SHIPDISPLAY_H

#include <QWidget>
#include "civilization.h"

namespace Ui {
class ShipDisplay;
}

class ShipDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit ShipDisplay(QWidget *parent = nullptr);
    ~ShipDisplay();
    void setCivilization(Civilization *civilization);

private:
    Ui::ShipDisplay *ui;
};

#endif // SHIPDISPLAY_H
