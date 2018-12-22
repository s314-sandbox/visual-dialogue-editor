#include "uinode.h"
#include "uiview.h"

UINode::UINode(UIScene *scene) : uiScene(scene)
{
    setFlag(ItemIsMovable);
    setFlag(ItemSendsGeometryChanges);
    setCacheMode(DeviceCoordinateCache);
    setZValue(-1);
}

QRectF UINode::boundingRect() const
{
    return QRectF(0,0, 128, 32);
}

void UINode::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::cyan);
    painter->drawRect(QRectF(0, 0, 128, 32));
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void UINode::drawHeader(QPainter *painter, const QString title, QRectF rect, QColor color)
{
    painter->setBrush(color);
    painter->drawRect(rect);
    painter->setBrush(Qt::black);
    painter->drawText(rect, Qt::AlignCenter, title);
}

void UINode::drawLabel(QPainter *painter, const QString title, QRectF rect)
{
    painter->setBrush(QColor("#9E9E9E"));
    painter->drawRect(rect);
    painter->setBrush(Qt::black);
    painter->drawText(rect, Qt::AlignVCenter, title);
}
