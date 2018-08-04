#include "gratitude.h"
#include "ui_gratitude.h"

gratitude::gratitude(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gratitude)
{
    ui->setupUi(this);
}

gratitude::~gratitude()
{
    delete ui;
}
