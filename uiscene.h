#ifndef UISCENE_H
#define UISCENE_H

#include <QGraphicsView>

class UIScene : public QGraphicsView
{
    Q_OBJECT

public:
    UIScene(QWidget *parent = 0);

private:
    int timerId;
};

#endif // UISCENE_H
