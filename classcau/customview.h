#ifndef CUSTOMVIEW_H
#define CUSTOMVIEW_H

// TENTATIVA DE SCROLL IMG
#include <QGraphicsView>
#include <QtWidgets>
#include <QWidget>

class CustomView : public QGraphicsView // graphicsview p/scroll
{
public:
    CustomView(QWidget *parent = 0);

protected:
    virtual void wheelEvent(QWheelEvent *event);
};

#endif // CUSTOMVIEW_H
