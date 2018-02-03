#ifndef UIMAINWINDOW_H
#define UIMAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QUuid>

class UIMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit UIMainWindow(QWidget *parent = nullptr);

signals:

public slots:

private:
    void setupScene();
};

#endif // UIMAINWINDOW_H
