#ifndef UISCENE_H
#define UISCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QMap>
#include <QUuid>

class UINode;

class UIScene : public QGraphicsScene
{
    Q_OBJECT

public:
    UIScene(QObject *parent = 0);
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);
private:
    QMap<QString, UINode*> nodes;
    QPointF                rightClick;
private slots:
    void                   addBranch();
    void                   addResponse();
};

#endif // UISCENE_H
