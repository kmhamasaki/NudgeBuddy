#include "todolist.h"
#include "ui_todolist.h"

todolist::todolist(QWidget *parent) : QWidget(parent), ui(new Ui::todolist)
{
    ui->setupUi(this);
    QLayout *temp = new QHBoxLayout;
    QWidget* mytext = new QTextEdit;
    delete parent->layout();
    temp->addWidget(mytext);
    parent->setLayout(temp);
    parent->show();
}

todolist::~todolist()
{
    delete ui;
}
