#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLayout>
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
    void buttonone();
    void on_pushButton_2_released();
    void sliderr(int c);

private:
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

    QLayout* emojimain;
};

#endif // MAINWINDOW_H
