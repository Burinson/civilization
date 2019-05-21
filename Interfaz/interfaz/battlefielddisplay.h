#ifndef BATTLEFIELDDISPLAY_H
#define BATTLEFIELDDISPLAY_H

#include <QWidget>
#include <civilization.h>

namespace Ui {
class battlefielddisplay;
}

class battlefielddisplay : public QWidget
{
    Q_OBJECT

public:
    explicit battlefielddisplay(QWidget *parent = nullptr);
    ~battlefielddisplay();

    void setCivilization(Civilization *civilizaition);

private:
    Ui::battlefielddisplay *ui;
};

#endif // BATTLEFIELDDISPLAY_H
