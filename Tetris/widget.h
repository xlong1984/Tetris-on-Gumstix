#ifndef WIDGET_H
#define WIDGET_H
#include "gamearea.h"
#include <QWidget>
#include <QPushButton>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    void doScore(int);
    explicit Widget(QWidget *parent = 0);
    ~Widget();




private:
    QIcon images;
    QTimer *timer;
    QTimer *timer2;
    QString textshow;
	QString data;
    QString score2;
    int score;
    int level;
int id;
    int startornot;
    int difficult;
    GameArea *gameArea;
    Ui::Widget *ui;
   // QPushButton *pushButton;

private slots:
void timer_upDate();
void timer2_upDate();
void on_pushButton_clicked();
void on_pushButton_2_clicked();
void on_pushButton_3_clicked();
void on_pushButton_4_clicked();
void on_pushButton_6_clicked();
void on_pushButton_8_clicked();
void on_pushButton_11_clicked();
void on_pushButton_10_clicked();
void on_pushButton_12_clicked();
void paintEvent(QPaintEvent *e);
void drawRotatedText(QPainter *painter,int x, int y, const QString &text);
void on_horizontalSlider_valueChanged(int value);
};

#endif // WIDGET_H
