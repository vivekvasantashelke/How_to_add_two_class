#ifndef SENDER_H
#define SENDER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Sender; }
QT_END_NAMESPACE

class Sender : public QMainWindow
{
    Q_OBJECT

public:
    Sender(QWidget *parent = nullptr);
    ~Sender();

public slots:
    void close_window();
void First_window();

private:
    Ui::Sender *ui;
};
#endif // SENDER_H
