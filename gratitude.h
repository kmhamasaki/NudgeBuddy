#ifndef GRATITUDE_H
#define GRATITUDE_H

#include <QWidget>

namespace Ui {
class gratitude;
}

class gratitude : public QWidget
{
    Q_OBJECT

public:
    explicit gratitude(QWidget *parent = nullptr);
    ~gratitude();

private:
    Ui::gratitude *ui;
};

#endif // GRATITUDE_H
