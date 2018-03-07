#ifndef UINODE_H
#define UINODE_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QList>

class UIScene;

class UINode : public QObject, public QGraphicsItem
{
    Q_OBJECT

public:
    explicit UINode(UIScene *scene = 0);
protected:
    UIScene    *uiScene;

    void      drawHeader(QPainter *painter, const QString title, QRectF rect, QColor color);
    void      drawLabel(QPainter *painter, const QString title, QRectF rect);
private:
    QRectF    boundingRect() const;
    void      paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // UINODE_H
