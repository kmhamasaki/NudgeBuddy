#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>
#include <QApplication>
#include <QHBoxLayout>
#include <QImage>
#include <QDebug>
#include <QSize>



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
    QPushButton *pushButton = new QPushButton("My Button");
    QLayout *layout = new QVBoxLayout;

    connect(pushButton, SIGNAL (released()),layout, SLOT (MainWindow::buttonone()));
    pushButton->setGeometry(QRect(QPoint(100, 100), QSize(200, 50)));
    QSlider* slider = new QSlider(Qt::Horizontal);
    connect(slider, SIGNAL (released()),layout, SLOT (MainWindow::buttonone()));

    slider->setMinimum(0);
    slider->setMaximum(10);
    //layout->addWidget(pushButton);
    //layout->addWidget(slider);

    emojimain = new QHBoxLayout;
    emojimain->setContentsMargins(260, 20, 0, 20);
    chill = new QLabel;
    QPixmap pixmap(":/images/chill.png");
    chill->setPixmap(pixmap);
    emojimain->addWidget(chill);
    //chill->setAlignment(Qt::AlignCenter);

    annoyed = new QLabel;
    QPixmap pixmap2(":/images/annoyed.png");
    pixmap2 = pixmap2.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    annoyed->setPixmap(pixmap2);
    emojimain->addWidget(annoyed);

    content = new QLabel;
    QPixmap pixmap3(":/images/content.png");
    pixmap3 = pixmap3.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    content->setPixmap(pixmap3);
    emojimain->addWidget(content);

    down = new QLabel;
    QPixmap pixmap4(":/images/down.png");
    pixmap4 = pixmap4.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    down->setPixmap(pixmap4);
    emojimain->addWidget(down);

    frustrated = new QLabel;
    QPixmap pixmap5(":/images/frustrated.png");
    pixmap5 = pixmap5.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    frustrated->setPixmap(pixmap5);
    emojimain->addWidget(frustrated);

    mad = new QLabel;
    QPixmap pixmap6(":/images/mad.png");
    pixmap6 = pixmap6.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    mad->setPixmap(pixmap6);
    emojimain->addWidget(mad);

    nervous = new QLabel;
    QPixmap pixmap7(":/images/nervous.png");
    pixmap7 = pixmap7.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    nervous->setPixmap(pixmap7);
    emojimain->addWidget(nervous);

    sad = new QLabel;
    QPixmap pixmap8(":/images/sad.png");
    pixmap8 = pixmap8.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    sad->setPixmap(pixmap8);
    emojimain->addWidget(sad);

    sick = new QLabel;
    QPixmap pixmap9(":/images/sick.png");
    pixmap9 = pixmap9.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    sick->setPixmap(pixmap9);
    emojimain->addWidget(sick);

    surprised = new QLabel;
    QPixmap pixmap10(":/images/surprised.png");
    pixmap10 = pixmap10.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    surprised->setPixmap(pixmap10);
    emojimain->addWidget(surprised);

    tired = new QLabel;
    QPixmap pixmap11(":/images/tired.png");
    pixmap11 = pixmap11.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    tired->setPixmap(pixmap11);
    emojimain->addWidget(tired);


    unsure = new QLabel;
    QPixmap pixmap12(":/images/unsure.png");
    pixmap12 = pixmap12.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    unsure->setPixmap(pixmap12);
    emojimain->addWidget(unsure);

    upset = new QLabel;
    QPixmap pixmap13(":/images/upset.png");
    pixmap13 = pixmap13.scaled(QSize(20,20), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    upset->setPixmap(pixmap13);
    emojimain->addWidget(upset);

    layout->addItem(emojimain);

    QLabel* chill2 = new QLabel;
    chill2->setText("Relaxed");
    chill2->setAlignment(Qt::AlignCenter);
    if(pixmap.isNull()) qDebug() << "x";
    layout->addWidget(chill2);
    //layout->addChildLayout(emojimain);
    window->setLayout(layout);
    window->show();

}

void MainWindow::buttonone()
{
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/", QUrl::TolerantMode));
}

void MainWindow::on_pushButton_2_released()
{
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/", QUrl::TolerantMode));

}

void MainWindow::sliderr(int c)
{
    return;
}
