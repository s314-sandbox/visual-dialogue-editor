#include "uiresponse.h"

UIResponse::UIResponse(QPointF &originPoint, UIScene *parent) : origin(originPoint), uiScene(parent)
{
    setFlag(ItemIsMovable);
    setFlag(ItemSendsGeometryChanges);
    setCacheMode(DeviceCoordinateCache);
    setZValue(-1);
    setupTextFields();
    headerRect = QRectF(originPoint.x(), originPoint.y(), 200, 30);
    contentsRect = QRectF(originPoint.x(), originPoint.y() + 30, 200, 30);
}

QRectF UIResponse::boundingRect() const
{
    return QRectF(origin.x(), origin.y(), 200, 240);
}

void UIResponse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    drawHeader(painter, tr("RESPONSE"), headerRect, Qt::magenta);
    drawLabel(painter, tr("Text"), contentsRect);
    painter->setBrush(QColor(Qt::white));
    painter->drawRect(origin.x(), origin.y() + 60, 200, 180);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void UIResponse::setupTextFields()
{

    // [] TEXT EDIT
    QGraphicsTextItem *editText = new QGraphicsTextItem("Speech...", this);
    editText->setTextWidth(200);
    editText->setPos(origin.x(), origin.y() + 60);
    editText->setTextInteractionFlags(Qt::TextEditorInteraction);
}
