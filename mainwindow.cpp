#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMovie>
#include "enermy.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scene(new QGraphicsScene(parent))
{
    ui->setupUi(this);
    InitBackground();
}


void MainWindow::InitBackground()
{
    //使用QGraphScene来存储所有对象
    scene->setSceneRect(0, 0, 900, 550); //设置坐标系，此时坐标（0，0）在窗口左上角
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setStyleSheet("background: transparent"); //设置透明背景

    //设置游戏地图
    //由于本demo中地图采用gif，所以使用QLabel来存储
    QLabel* label=new QLabel(this);
    label->setGeometry(0,0,910,560);
    QMovie *movie = new QMovie(":/image/map2.gif");
    label->setMovie(movie);// 在标签中添加动画
    label->setScaledContents(true);
    label->lower();//将label置于底层
    movie->start();

    /**关于地图的设置
     - 本demo中采用了一种偷懒的方法来设置地图，即使用一整张gif/image,考虑到后续需要设置路径，这并不是最好的方法。
     - 还有其他的方法来存储地图，比如使用数组的形式，每一个元素代表地图上的一块，通过拼凑来构造地图；
     - 或者更多其他方法，最重要的是需要适合你的实现逻辑，便于你的后续进行
    **/

    //构造一个敌方单位
    Enermy* e=new Enermy();
    e->setPos(QPointF(330,100));
    scene->addItem(e);
}


MainWindow::~MainWindow()//释放内存
{
    delete scene;
    delete ui;
}

