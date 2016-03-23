#include <QApplication>
#include <QQuickView>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQuickView view;

    view.setSource(QUrl::fromLocalFile("debug/main.qml"));
    view.show();


    return app.exec();
}
