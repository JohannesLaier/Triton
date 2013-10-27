#include "Triton.h"
#include "ui_triton.h"

Triton::Triton(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Triton)
{
    ui->setupUi(this);
}

Triton::~Triton() {
    delete ui;
}
