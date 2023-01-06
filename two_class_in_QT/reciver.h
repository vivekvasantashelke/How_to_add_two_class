#ifndef RECIVER_H
#define RECIVER_H

#include <QWidget>
#include "sender.h"

namespace Ui {
class Reciver;
}

class Reciver : public QWidget
{
    Q_OBJECT

public:
    explicit Reciver(QWidget *parent = nullptr);
    ~Reciver();
public slots:
    void show_window();
    void close_window();

private:
    Ui::Reciver *ui;
  //  Sender *sen=new Sender;
};

#endif // RECIVER_H
