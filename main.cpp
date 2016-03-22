#include <QApplication>
#include "Fenetre.h"
#include "qmlapplicationviewer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QmlApplicationViewer viewer;

    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationLockPortrait);
    viewer.setMainQmlFile(QLatin1String("qml/main.qml"));
    viewer.showExpanded();


    //Fenetre fenetre;
    //fenetre.show();

    return app.exec();
}
