#include "uiscene.h"

UIScene::UIScene(QWidget *parent) : QGraphicsView(parent)
{
    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->setBackgroundBrush(QImage(":/images/grid.png"));
    setScene(scene);
}
