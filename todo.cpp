#include "todo.h"
#include "ui_todo.h"
#include <QtDebug>
todo::todo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::todo)
{

    qDebug() << "hello";
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL (pressed()), this, SLOT (additem()));
    ui->mytable->setColumnWidth(0,240);

}

todo::~todo()
{
    delete ui;
}

void todo::additem()
{
    qDebug() << "ehello";
    //QString myline = ui->lineEdit->text();
    QDate mydate = ui->dateEdit->date();
    ui->mytable->insertRow(0);
    QTableWidgetItem *myline = new QTableWidgetItem(ui->lineEdit->text());
    ui->mytable->setItem(0, 0, myline );
    QTableWidgetItem *date = new QTableWidgetItem(mydate.toString());
    ui->mytable->setItem(0, 1, date);


}
