#ifndef MONSTERTWO_H
#define MONSTERTWO_H
#include <vector>
#include <QGraphicsItem>
#include <QPainter>
#include <iostream>
#include <QMovie>
#include <string>
using namespace std;

/**敌方单位类
 - 本demo中选用QGraphicsItem类来实现敌方单位，还有更多的实现方法
 - 本demo中仅实现了敌方单位的简单初始化
 - 本demo中选用了gif来表示敌方单位，还有其他更多的表示方法，例如image
**/
class Enermy:public QGraphicsItem
{
private:
    string Pic;//所采用的gif路径
    QMovie * movie;//构造gif图片所需
    //...... 仍需添加其他成员，以实现你想要的更多功能

public:
    Enermy();
    virtual ~Enermy();
    //......

protected:
    //以下两个函数均为继承QGraphicsItem类所需重写的函数，具体含义即更多操作请参阅Qt教程
    QRectF boundingRect() const; //override
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget); //override
};


#endif // MONSTERTWO_H
