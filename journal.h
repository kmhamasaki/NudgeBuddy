#ifndef JOURNAL_H
#define JOURNAL_H

#include <QWidget>

namespace Ui {
class journal;
}

class journal : public QWidget
{
    Q_OBJECT

public:
    explicit journal(QWidget *parent = nullptr);
    ~journal();

private:
    Ui::journal *ui;
};

#endif // JOURNAL_H
