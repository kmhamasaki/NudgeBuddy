#ifndef TODO_H
#define TODO_H

#include <QWidget>

namespace Ui {
class todo;
}

class todo : public QWidget
{
    Q_OBJECT

public:
    explicit todo(QWidget *parent = nullptr);
    ~todo();

private slots:
    void additem();

private:
    Ui::todo *ui;
};

#endif // TODO_H
