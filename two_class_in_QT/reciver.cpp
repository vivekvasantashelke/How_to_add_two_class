#include "reciver.h"
#include "ui_reciver.h"
Reciver::Reciver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reciver)
{



    ui->setupUi(this);
}

Reciver::~Reciver()
{
    delete ui;
}

void Reciver::show_window()
{
    qDebug()<<"ok";
    ui->label->setText("hellooo");
show();

//connect(ui->pushButton,SIGNAL(clicked()),sen,SLOT(First_window()));
//connect(ui->pushButton,&QPushButton::clicked,this,&Reciver::close_window);

}

void Reciver::close_window()
{
    close();

}
