#ifndef UIVIEW_H
#define UIVIEW_H

#include <uiscene.h>
#include <QGraphicsView>

class UINode;

class UIView : public QGraphicsView
{
    Q_OBJECT

public:
    UIView(QWidget *parent = 0);
//    void contextMenuEvent(QContextMenuEvent *event);

private:
    UIScene                *scene;

    void                   setupGreeting();
};

#endif // UIVIEW_H
