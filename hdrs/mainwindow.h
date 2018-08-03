#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLayout>
#include <QHash>
#include <QPair>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void init();

private slots:
    void left_click();
    void right_click();
    void select();
    void on_pushButton_2_released();
    void sliderr(int c);

   protected:
    int current = 1;
    QWidget* window;
    QLabel* chill;
    QLabel* annoyed;
    QLabel* content;
    QLabel* down;
    QLabel* frustrated;
    QLabel* mad;
    QLabel* nervous;
    QLabel* sad;
    QLabel* sick;
    QLabel* unsure;
    QLabel* surprised;
    QLabel* tired;
    QLabel* upset;
QLayout *layout;
QLabel* text;
    QLayout* emojimain;
    QHash<int, QPair<QLabel*, QString>> emoji_map;
};

#endif // MAINWINDOW_H
