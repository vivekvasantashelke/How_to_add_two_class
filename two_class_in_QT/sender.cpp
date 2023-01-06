#include "sender.h"
#include "ui_sender.h"
#include "reciver.h"
Sender::Sender(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Sender)
{
    ui->setupUi(this);
    Reciver *rec=new Reciver;

    connect(ui->pushButton,SIGNAL(clicked()),rec,SLOT(show_window()));
    connect(ui->pushButton,&QPushButton::clicked,this,&Sender::close_window);

}

Sender::~Sender()
{
    delete ui;
}

void Sender::close_window()
{
    close();
}

void Sender::First_window()
{
show();
}

