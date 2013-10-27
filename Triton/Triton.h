#ifndef TRITON_H
#define TRITON_H

#include <QMainWindow>

namespace Ui {
class Triton;
}

class Triton : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Triton(QWidget *parent = 0);
    ~Triton();
    
private:
    Ui::Triton *ui;
};

#endif // TRITON_H
