#include <QApplication>
#include <uimainwindow.h>
#include <uiscene.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    UIMainWindow mainWindow;
    UIScene *mainView = new UIScene;
    mainWindow.setCentralWidget(mainView);
    mainWindow.show();

    return a.exec();
}
