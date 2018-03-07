#include "uimainwindow.h"

UIMainWindow::UIMainWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle(tr("Visual Dialogue Editor"));
    setMinimumSize(640, 480);
}


