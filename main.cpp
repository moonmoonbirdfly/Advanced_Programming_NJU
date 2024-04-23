/**README
—————————————————————————---
| BEFORE YOU READ THE CODE |
____________________________

- 这是24春《高级程序设计》课程设计项目基于Qt实现的一份代码demo
- 阅读本份demo前，请确保你已掌握Qt编程的基础知识，例如：
  - Qt项目中的文件分别是什么
    - .pro
    - .ui
    - .o
    - /Resources
    - ......
  - Qt中的类分别是什么
    - QDialog
    - QApplicaiotn
    - QGraphicsView
    - ......
  - ......
- 这只是一份参考代码，并不代表你一定要按照本代码的结构实现相应的逻辑
- Qt项目的路径不要包含中文，否则容易构建失败，所以请将本项目置于英文路径下
- 本份代码不含任何绝对路径，可以正确运行，如果你下载后构建失败，无需修改代码，请按照相应的报错修改项目的本地设置（请自行谷歌报错即如何相应修改项目设置）
- 本份代码中仅实现了一个地图的一种初始化方式、一个敌方单位的一种初始化方式
**/


#include <QApplication>
#include "gamestart.h"
#include "mainwindow.h"
#include <iostream>

using namespace  std;

// Run the demo
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GameStart s; //菜单界面

    if (s.exec()==QDialog::Accepted)
    {
        MainWindow mw;
        mw.show(); //游戏界面
        return a.exec();
    }
    else return 0;

}
