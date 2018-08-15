#include "gvcustomview.h"

GVCustomView::GVCustomView(QWidget *parent) :
    QGraphicsView(parent)
{

}

void GVCustomView::wheelEvent(QWheelEvent *event)
{
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    double scaleFactor = 1.15;

    if(event->delta() > 0)
    {
        scale(scaleFactor, scaleFactor);
    }
    else
    {
        scale(1/scaleFactor, 1/scaleFactor);
    }
}
