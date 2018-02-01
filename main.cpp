#include <QApplication>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QUuid>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene mainScene;
    QUuid id;
    id = QUuid::createUuid();
    mainScene.addText(id.toString());
    mainScene.setBackgroundBrush(QImage(":/images/grid.png"));

    QGraphicsView *mainView = new QGraphicsView(&mainScene);

    QMainWindow mainWindow;
    mainWindow.setCentralWidget(mainView);
    mainWindow.show();

    return a.exec();
}
