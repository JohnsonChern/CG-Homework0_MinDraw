#ifndef MINDRAW_H
#define MINDRAW_H

#include <QtWidgets/QMainWindow>
#include "ui_mindraw.h"

class MinDraw : public QMainWindow
{
    Q_OBJECT

public:
    MinDraw(QWidget *parent = 0);
    ~MinDraw();

private:
    Ui::MinDrawClass ui;
};

#endif // MINDRAW_H
