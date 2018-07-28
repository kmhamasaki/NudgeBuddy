#include "hdrs/mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>
#include <QApplication>
#include <QHBoxLayout>
#include <QImage>
#include <QDebug>
#include <QSize>
#include <QPainterPath>
#include <QPainter>
#include <QRectF>
#include <QBitmap>
#include <QIcon>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    init();

}

MainWindow::~MainWindow()
{

}

void MainWindow::init()
{
    window = new QWidget;

    layout = new QVBoxLayout;

    QSlider* slider = new QSlider(Qt::Horizontal);
    connect(slider, SIGNAL (released()),layout, SLOT (MainWindow::buttonone()));

    slider->setMinimum(0);
    slider->setMaximum(12);
    //layout->addWidget(pushButton);

    emojimain = new QHBoxLayout;
    emojimain->setContentsMargins(300, 20, 0, 20);
    emojimain->setSpacing(5);
    chill = new QLabel;
    QPixmap pixmap1(":/images/images/chill.png");
    chill->setPixmap(pixmap1);
    emojimain->addWidget(chill);
    //chill->setAlignment(Qt::AlignCenter);
    emoji_map[1] = QPair<QLabel*, QString>(chill, "chill");
    emoji_map[2] = QPair<QLabel*, QString>(annoyed, "annoyed");
    emoji_map[3] = QPair<QLabel*, QString>(content, "content");
    emoji_map[4] = QPair<QLabel*, QString>(down, "down");
    emoji_map[5] = QPair<QLabel*, QString>(frustrated, "frustrated");
    emoji_map[6] = QPair<QLabel*, QString>(mad, "mad");
    emoji_map[7] = QPair<QLabel*, QString>(nervous, "nervous");
    emoji_map[8] = QPair<QLabel*, QString>(sad, "sad");
    emoji_map[9] = QPair<QLabel*, QString>(sick, "sick");
    emoji_map[10] = QPair<QLabel*, QString>(unsure, "unsure");
    emoji_map[11] = QPair<QLabel*, QString>(surprised, "surprised");
    emoji_map[12] = QPair<QLabel*, QString>(tired, "tired");
    emoji_map[13] = QPair<QLabel*, QString>(upset, "upset");

    QPixmap pixmap[14];
    for(int i = 2; i <= 13; i ++)
    {
        emoji_map[i].first = new QLabel;
        pixmap[i].load(":/images/images/" + emoji_map[i].second + ".png");
        pixmap[i] = pixmap[i].scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        emoji_map[i].first->setPixmap(pixmap[i]);
        emojimain->addWidget(emoji_map[i].first);
    }

    QLabel* chill2 = new QLabel;
    chill2->setText("Relaxed");
    chill2->setAlignment(Qt::AlignCenter);

    QLayout* Buttons = new QHBoxLayout;
    Buttons->setAlignment(Qt::AlignCenter);
    Buttons->setSpacing(15);
    QPushButton* left_tri= new QPushButton;
    QPixmap ltpixmap(":/images/images/left_tri.png");
    ltpixmap = ltpixmap.scaled(QSize(30,30), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QIcon ButtonIcon(ltpixmap);
    left_tri->setIcon(ButtonIcon);
    left_tri->setIconSize(QSize(30,30));
    left_tri->setFixedSize(QSize(45,45));
    connect(left_tri, SIGNAL (pressed()),this, SLOT (left_click()));

    Buttons->addWidget(left_tri);

    QPushButton* right_tri = new QPushButton;
    QPixmap rtpixmap(":/images/images/right_tri.png");
    rtpixmap = rtpixmap.scaled(QSize(30,30), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QIcon ButtonIcon2(rtpixmap);
    right_tri->setIcon(ButtonIcon2);
    right_tri->setIconSize(QSize(30,30));
    right_tri->setFixedSize(QSize(45,45));
    connect(right_tri, SIGNAL (pressed()),this, SLOT (right_click()));

    Buttons->addWidget(right_tri);

    layout->addWidget(chill2);
    layout->addItem(emojimain);
    //layout->addWidget(slider);
    layout->addItem(Buttons);
    //layout->addChildLayout(emojimain);
    window->setLayout(layout);
    window->show();

}

void MainWindow::left_click()
{
    if(current==1) return;
    emoji_map[current].first->setPixmap( emoji_map[current].first->pixmap()->scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation) );
    current--;
    emoji_map[current].first->setPixmap(QPixmap(":/images/images/" + emoji_map[current].second + ".png"));
    emojimain->update();

}

void MainWindow::right_click()
{
    if(current == 13) return;

    qDebug() << "right click";
    emoji_map[current].first->setPixmap( emoji_map[current].first->pixmap()->scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation) );
    current++;
    emoji_map[current].first->setPixmap(QPixmap(":/images/images/" + emoji_map[current].second + ".png"));


    emojimain->update();

}

//    QDesktopServices::openUrl(QUrl("https://www.youtube.com/", QUrl::TolerantMode));

void MainWindow::on_pushButton_2_released()
{
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/", QUrl::TolerantMode));

}

void MainWindow::sliderr(int c)
{
    return;
}
