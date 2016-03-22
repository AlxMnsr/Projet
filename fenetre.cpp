#include "Fenetre.h"
#include <QHBoxLayout>
#include <QLabel>
#include <QDesktopWidget>

Fenetre::Fenetre() : QWidget()
{
    setFixedSize(1000, 500);
    setWindowTitle(tr("Interpret LOGO"));

    //Canvas


    // Construction des boutons
    r_button = new QPushButton("Réinitialliser", this);
    v_button = new QPushButton("Valider", this);

    //Insertion du texte
    QLabel *label = new QLabel("Inserer texte", this);

    //Creation du layout
    QGridLayout *layout = new QGridLayout;

    //On lie les widgets avec le layout
    layout->addWidget(r_button, 2, 0);
    layout->addWidget(v_button, 2, 1);
    layout->addWidget(label, 0, 0, 1, 1);

    //On lie le layout et la fenetre
    this->setLayout(layout);

}
