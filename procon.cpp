#include "procon.h"
#include "ui_procon.h"

procon::procon(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::procon)
{
    ui->setupUi(this);
}

procon::~procon()
{
    delete ui;
}
