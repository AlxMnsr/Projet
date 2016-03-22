#ifndef FENETRE_H
#define FENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class Fenetre : public QWidget //heritage sur QWidget
{

public:
    Fenetre();

private:
    QPushButton *r_button;
    QPushButton *v_button;


};

#endif // FENETRE_H
