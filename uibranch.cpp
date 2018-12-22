#include "uibranch.h"

UIBranch::UIBranch(QPointF &originPoint, UIScene *parent) : origin(originPoint), uiScene(parent)
{
    setFlag(ItemIsMovable);
    setFlag(ItemSendsGeometryChanges);
    setCacheMode(DeviceCoordinateCache);
    setZValue(-1);
    setupTextFields();
    headerRect = QRectF(originPoint.x(), originPoint.y(), 200, 30);
    contentsRect = QRectF(originPoint.x(), originPoint.y() + 30, 200, 30);
}

QRectF UIBranch::boundingRect() const
{
    return QRectF(origin.x(), origin.y(), 200, 300);
}

void UIBranch::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    drawHeader(painter, tr("BRANCH"), headerRect, Qt::cyan);
    drawLabel(painter, tr("Source"), contentsRect);
    // TODO: Разобраться с этим делом
    painter->setBrush(QColor(Qt::white));
    painter->drawRect(origin.x(), origin.y() + 60, 200, 30);
    drawLabel(painter, tr("Text"), QRectF(origin.x(), origin.y() + 90, 200, 30));
    painter->setBrush(QColor(Qt::white));
    painter->drawRect(origin.x(), origin.y() + 120, 200, 180);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void UIBranch::setupTextFields()
{
    // [] TEXT EDIT
    QGraphicsTextItem *editText1 = new QGraphicsTextItem("RefID...", this);
    editText1->setTextWidth(200);
    editText1->setPos(origin.x(), origin.y() + 60);
    editText1->setTextInteractionFlags(Qt::TextEditorInteraction);

    // [] TEXT EDIT
    QGraphicsTextItem *editText2 = new QGraphicsTextItem("Speech...", this);
    editText2->setTextWidth(200);
    editText2->setPos(origin.x(), origin.y() + 120);
    editText2->setTextInteractionFlags(Qt::TextEditorInteraction);
}
