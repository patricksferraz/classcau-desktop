#ifndef GVCUSTOMVIEW_H
#define GVCUSTOMVIEW_H

// TENTATIVA DE SCROLL IMG
#include <QGraphicsView>
#include <QtWidgets>
#include <QWidget>

class GVCustomView : public QGraphicsView // graphicsview p/scroll
{
public:
    GVCustomView(QWidget *parent = 0);

protected:
    virtual void wheelEvent(QWheelEvent *event);
};

#endif // GVCUSTOMVIEW_H
