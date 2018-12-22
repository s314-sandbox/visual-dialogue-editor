#ifndef UIRESPONSE_H
#define UIRESPONSE_H


#include <uinode.h>
#include <QGraphicsTextItem>
#include <QLabel>

class UIResponse : public UINode
{
    Q_OBJECT
public:
    explicit UIResponse(QPointF& originPoint, UIScene *parent = 0);

signals:

public slots:

protected:
    UIScene   *uiScene;

private:
    QPointF   origin;
    QRectF    headerRect;
    QRectF    contentsRect;

    QRectF    boundingRect() const;
    void      paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void      setupTextFields();
};

#endif // UIRESPONSE_H
