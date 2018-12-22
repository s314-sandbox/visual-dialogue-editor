#include "uiview.h"
#include "uinode.h"
#include "uibranch.h"
#include <QtWidgets>
#include <QMenu>

UIView::UIView(QWidget *parent) : QGraphicsView(parent)
{
    scene = new UIScene(this);
    scene->setBackgroundBrush(QImage(":/images/grid.png"));
    scene->setSceneRect(0, 0, 32000, 32000);
    setScene(scene);

    setCacheMode(CacheBackground);
    setDragMode(QGraphicsView::ScrollHandDrag);
    setRenderHint(QPainter::Antialiasing);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

//void UIView::contextMenuEvent(QContextMenuEvent *event)
//{
//    rightClick = event->pos();
//    QMenu menu(this);
//    menu.addAction(tr("New Branch"), this, SLOT(addBranch()));
//    menu.addAction(tr("New Response"));
//    menu.addAction(tr("New Action"));
//    menu.exec(event->globalPos());
//}

void UIView::setupGreeting()
{

}
