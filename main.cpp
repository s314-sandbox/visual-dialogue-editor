#include <QApplication>
#include <uimainwindow.h>
#include <uiview.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    UIMainWindow mainWindow;
    UIView *mainView = new UIView;
    mainWindow.setCentralWidget(mainView);
    mainWindow.show();

    return a.exec();
}
