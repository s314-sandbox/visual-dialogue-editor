#include "uiscene.h"
#include "uinode.h"
#include "uibranch.h"
#include "uiresponse.h"
#include <QMenu>

UIScene::UIScene(QObject *parent) : QGraphicsScene(parent)
{

}

void UIScene::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    rightClick = event->scenePos();
    QMenu menu(event->widget());
    menu.addAction(tr("New Branch"), this, SLOT(addBranch()));
    menu.addAction(tr("New Response"), this, SLOT(addResponse()));
    menu.addAction(tr("New Action"));
    menu.exec(event->screenPos());
}

void UIScene::addBranch()
{
    QUuid id = QUuid::createUuid();
    nodes[id.toString()] = new UIBranch(rightClick, this);
    addItem(nodes[id.toString()]);
}

void UIScene::addResponse()
{
    QUuid id = QUuid::createUuid();
    nodes[id.toString()] = new UIResponse(rightClick, this);
    addItem(nodes[id.toString()]);
}
