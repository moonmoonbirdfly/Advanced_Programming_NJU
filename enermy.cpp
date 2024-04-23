#include "enermy.h"
#include <QMovie>
#include <iostream>
#include <QList>
#include <QDebug>

using namespace std;


Enermy::Enermy()
{
    Pic=":/gif/bat.gif";
    movie = new QMovie(QString::fromStdString(Pic));
    movie->start();
}


Enermy::~Enermy()
{
    delete movie;
}


void Enermy::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) //override
{
    if (movie && movie->state() == QMovie::Running)
    {
        painter->drawImage(boundingRect(), movie->currentImage());
    }
}

QRectF Enermy::boundingRect() const
{
    qreal ENERMY_SIZE=30;
    return QRectF(-ENERMY_SIZE, -ENERMY_SIZE, ENERMY_SIZE*2, ENERMY_SIZE*2);
}
