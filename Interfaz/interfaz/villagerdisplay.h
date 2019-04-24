#ifndef VILLAGERDISPLAY_H
#define VILLAGERDISPLAY_H

#include <QWidget>
#include <civilization.h>

namespace Ui {
class villagerdisplay;
}

class villagerdisplay : public QWidget
{
    Q_OBJECT

public:
    explicit villagerdisplay(QWidget *parent = nullptr);
    ~villagerdisplay();

    void setCivilization(Civilization *civilization);

private:
    Ui::villagerdisplay *ui;
};

#endif // VILLAGERDISPLAY_H
