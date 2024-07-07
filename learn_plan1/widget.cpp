 #include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QPushButton * btn = new QPushButton;
    //btn->show();//默认情况下以顶层方式弹出窗口控件
    //让btn对象 依赖在widget窗口中
    btn->setParent(this);
    //显示按钮上的文本
    btn->setText("第一个按钮");
    QPushButton * btn2 = new QPushButton("第二个按钮",this);
    //移动btn2按钮
    btn2->move(300,300);
    //按钮重置大小
    btn2->resize(50,50);
    //重置窗口大小
    setFixedSize(700,700);
    //设置窗口标题
    setWindowTitle("今日学习");

}

Widget::~Widget()
{
    delete ui;
}
