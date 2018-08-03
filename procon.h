#ifndef PROCON_H
#define PROCON_H

#include <QWidget>

namespace Ui {
class procon;
}

class procon : public QWidget
{
    Q_OBJECT

public:
    explicit procon(QWidget *parent = nullptr);
    ~procon();

private:
    Ui::procon *ui;
};

#endif // PROCON_H
