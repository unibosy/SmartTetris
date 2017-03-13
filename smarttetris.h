#ifndef SMARTTETRIS_H
#define SMARTTETRIS_H

#include <QtWidgets/QMainWindow>
#include "ui_smarttetris.h"

class SmartTetris : public QMainWindow
{
    Q_OBJECT

public:
    SmartTetris(QWidget *parent = 0);
    ~SmartTetris();
public:
  int generateBlock();

private:
    Ui::SmartTetrisClass ui;
};

#endif // SMARTTETRIS_H
