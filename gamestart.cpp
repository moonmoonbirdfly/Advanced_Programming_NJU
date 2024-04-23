#include "gamestart.h"
#include "ui_gamestart.h"
#include "mainwindow.h"

using namespace std;

GameStart::GameStart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameStart)
{
    ui->setupUi(this);
}

GameStart::~GameStart()
{
    delete ui;
}


void GameStart::on_pushButton_clicked()
{
    this->accept();
}
