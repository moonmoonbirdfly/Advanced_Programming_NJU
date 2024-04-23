#ifndef CUSTOMSCENE_H
#define CUSTOMSCENE_H


#include <QGraphicsScene>

//自定义场景类，重写了DnD 函数
class CustomScene : public QGraphicsScene
{
public:
    CustomScene(QWidget* parent);
};

#endif // CUSTOMSCENE_H
