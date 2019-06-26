#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
#include <iostream>
#include <string>
#include <QTime>
#include <ctime>
#include <QMediaPlayer>
#include <QPixmap>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(0));

    //cat image
    QPixmap image(":/neon-cat-clipart-4.gif");
    QPixmap lose_image(":/sad-cat.png");
    int w1 = ui->label_3->width();
    int h1 = ui->label_3->height();
    ui->label_3->setPixmap(image.scaled(w1,h1));
    int w2 = ui->label_4->width();
    int h2 = ui->label_4->height();
    ui->label_4->setPixmap(lose_image.scaled(w2,h2,Qt::KeepAspectRatio));

    //Connect the buttons from the UI
    connect(ui->pushButton,SIGNAL(released()),this,SLOT(press_button()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(query()));
    ui->pushButton_2->setEnabled(false);
    ui->LOSE->setVisible(false);
    ui->RATING->setVisible(false);
    ui->label_4->setVisible(false);
    ui->final_score->setVisible(false);

    connect(ui->BlueButton,SIGNAL(released()),this,SLOT(press_blue()));
    connect(ui->RedButton,SIGNAL(released()),this,SLOT(press_red()));
    connect(ui->YellowButton,SIGNAL(released()),this,SLOT(press_yellow()));
    connect(ui->OrangeButton,SIGNAL(released()),this,SLOT(press_orange()));
    connect(ui->GreenButton,SIGNAL(released()),this,SLOT(press_green()));
    connect(ui->PurpleButton,SIGNAL(released()),this,SLOT(press_purple()));

    ui->progressBar->setValue(progress);

    //sound effects for the buttons
    sound1 = new QMediaPlayer();
    sound1->setMedia(QUrl("qrc:/sound_effects/Button1.wav"));
    sound1->setVolume(200);

    sound2 = new QMediaPlayer();
    sound2->setMedia(QUrl("qrc:/sound_effects/Button2.wav"));
    sound2->setVolume(200);

    sound3 = new QMediaPlayer();
    sound3->setMedia(QUrl("qrc:/sound_effects/Button3.wav"));
    sound3->setVolume(200);

    sound4 = new QMediaPlayer();
    sound4->setMedia(QUrl("qrc:/sound_effects/Button4.wav"));
    sound4->setVolume(200);

    sound5 = new QMediaPlayer();
    sound5->setMedia(QUrl("qrc:/sound_effects/Button5.wav"));
    sound5->setVolume(200);

    sound6 = new QMediaPlayer();
    sound6->setMedia(QUrl("qrc:/sound_effects/Button6.wav"));
    sound6->setVolume(200);

    fail = new QMediaPlayer();
    fail->setMedia(QUrl("qrc:/sound_effects/fail-buzzer-04.mp3"));
    fail->setVolume(20);

}

//deconstructor
MainWindow::~MainWindow()
{
    delete ui;
}

//The buttons to add our user input to the sequence to compare
void MainWindow::press_blue(){
    if (sound2->state() == QMediaPlayer::PlayingState){
        sound2->setPosition(0);
    }
    sound2->play();
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->textEdit_2->insertPlainText(QString("B"));
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->progressBar->setValue(progress+1);
    progress++;
}
void MainWindow::press_yellow(){
    if (sound4->state() == QMediaPlayer::PlayingState){
        sound4->setPosition(0);
    }
    sound4->play();
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->textEdit_2->insertPlainText(QString("Y"));
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->progressBar->setValue(progress+1);
    progress++;
}
void MainWindow::press_red(){
    if (sound3->state() == QMediaPlayer::PlayingState){
        sound3->setPosition(0);
    }
    sound3->play();
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->textEdit_2->insertPlainText(QString("R"));
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->progressBar->setValue(progress+1);
    progress++;
}
void MainWindow::press_orange(){
    if (sound5->state() == QMediaPlayer::PlayingState){
        sound5->setPosition(0);
    }
    sound5->play();
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->textEdit_2->insertPlainText(QString("O"));
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->progressBar->setValue(progress+1);
    progress++;
}
void MainWindow::press_green(){
    if (sound1->state() == QMediaPlayer::PlayingState){
        sound1->setPosition(0);
    }
    sound1->play();
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->textEdit_2->insertPlainText(QString("G"));
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->progressBar->setValue(progress+1);
    progress++;
}
void MainWindow::press_purple(){
    if (sound6->state() == QMediaPlayer::PlayingState){
        sound6->setPosition(0);
    }
    sound6->play();
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->textEdit_2->insertPlainText(QString("P"));
    ui->textEdit_2->moveCursor(QTextCursor::End);
    ui->progressBar->setValue(progress+1);
    progress++;
}


void MainWindow::delay(int n)
{
    QTime dieTime= QTime::currentTime().addMSecs(n);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


//Clean up our UI so we can start a new game.
void MainWindow::cleanUp(){
    ui->textEdit_2->clear();
    ui->SCORE->clear();
    ui->progressBar->setValue(0);
    ui->SCORE->setText("0");
    ui->LOSE->clear();
    ui->LOSE->setVisible(false);
    ui->RATING->clear();
    ui->RATING->setVisible(false);
    ui->label_4->setVisible(false);
    ui->final_score->clear();
    ui->final_score->setVisible(false);
    solution.clear();
    count = 0;
    progress = 0;
}

void MainWindow::query(){
    ui->pushButton_2->setEnabled(false);
    QString text = ui->textEdit_2->toPlainText();
    QString qstr = QString::fromStdString(solution);
    QPixmap star(":/Buttons/Icons/star.png");
    QPixmap star2(":/Buttons/Icons/2stars.png");
    QPixmap star3(":/Buttons/Icons/3stars.png");
    QPixmap star4(":/Buttons/Icons/4stars.png");
    QPixmap star5(":/Buttons/Icons/5stars.png");

    //User was correct, generate more pattern.
    if (text == qstr){

        count += 1;
        progress += 1;
        ui->SCORE->setText(QString::number(count));
        ui->textEdit_2->clear();

        generate();

    }

    //Player enters in wrong substring
    else{
        fail->play();
        ui->textEdit_2->clear();
        ui->LOSE->setVisible(true);
        ui->LOSE->setText("\n\n...YOU LOSE...\nYOUR SCORE: \nYOUR RANK: \nRETRY?");
        ui->RATING->setVisible(true);
        int w = ui->RATING->width();
        int h = ui->RATING->height();
        ui->label_4->setVisible(true);
        ui->final_score->setVisible(true);
        ui->final_score->setText(QString::number(count));
        if (count < 4){
            ui->RATING->setPixmap(star.scaled(w,h,Qt::KeepAspectRatio));
        }
        if (count > 3 && count < 7){
            ui->RATING->setPixmap(star2.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
        }
        if (count > 6 && count < 10){
            ui->RATING->setPixmap(star3.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
        }
        if (count > 9 && count < 13){
            ui->RATING->setPixmap(star3.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
        }
        if (count > 11 && count < 16){
            ui->RATING->setPixmap(star4.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
        }
        if (count > 15){
            ui->RATING->setPixmap(star5.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
        }
        ui->pushButton_2->setEnabled(false);
        ui->pushButton->setEnabled(true);
    }
}


void MainWindow::generate(){

    // Our images to generate
    QPixmap green_pic(":/Buttons/green_button.png");
    QPixmap blue_pic(":/Buttons/blue_button.png");
    QPixmap orange_pic(":/Buttons/orange_button.png");
    QPixmap purple_pic(":/Buttons/purple_button.png");
    QPixmap red_pic(":/Buttons/red_button.png");
    QPixmap yellow_pic(":/Buttons/yellow_button.png");


    // Slowly reduce time between pattern showing..
    int _Delay = 1000;
    for(int i =0; i < int(solution.length());i++){
        _Delay = _Delay * .90;
    }

    ui->label->setText("Listen...");
    ui->BlueButton->setEnabled(false);
    ui->YellowButton->setEnabled(false);
    ui->GreenButton->setEnabled(false);
    ui->OrangeButton->setEnabled(false);
    ui->RedButton->setEnabled(false);
    ui->PurpleButton->setEnabled(false);
    ui->progressBar->setMaximum(count+1);
    progress = 0;
    ui->progressBar->setValue(progress);

    char c;

    int num = (rand() % 6);

    switch(num){
        case 0:
            c = 'G';break; //Green
        case 1:
            c = 'B';break; //Blue
        case 2:
            c = 'Y';break; //Yellow
        case 3:
            c = 'R';break; // Red
        case 4:
            c = 'O';break; //Orange
        case 5:
            c = 'P';break; //Purple
    }

    solution += c;

    char temp[50];
    strncpy(temp,solution.c_str(),50);

    //Show what sequence is being played
    ui->textEdit->setStyleSheet("background-color: white");
    for ( unsigned int i=0; i<solution.length();i++){

        ui->textEdit->moveCursor(QTextCursor::End);

        ui->textEdit->insertPlainText(QString(temp[i]));

        ui->textEdit->moveCursor(QTextCursor::End);

        ui->DISPLAYC->setText(QString(temp[i]));

        int w = ui->DISPLAYC->width();
        int h = ui->DISPLAYC->height();


         switch(temp[i]){
             case 'G':
                ui->DISPLAYC->setPixmap(green_pic.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
                if (sound1->state() == QMediaPlayer::PlayingState){
                    sound1->setPosition(0);
                }
                sound1->play();
                break;
             case 'B':
                 ui->DISPLAYC->setPixmap(blue_pic.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
                 if (sound2->state() == QMediaPlayer::PlayingState){
                     sound2->setPosition(0);
                 }
                 sound2->play();
                 break;
             case 'R':
                  ui->DISPLAYC->setPixmap(red_pic.scaled(w,h,Qt::KeepAspectRatio, Qt::SmoothTransformation));
                 if (sound3->state() == QMediaPlayer::PlayingState){
                     sound3->setPosition(0);
                 }
                 sound3->play();
                 break;
             case 'Y':
                  ui->DISPLAYC->setPixmap(yellow_pic.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
                 if (sound4->state() == QMediaPlayer::PlayingState){
                     sound4->setPosition(0);
                 }
                 sound4->play();
                 break;
             case 'O':
                 ui->DISPLAYC->setPixmap(orange_pic.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
                 if (sound5->state() == QMediaPlayer::PlayingState){
                     sound5->setPosition(0);
                 }
                 sound5->play();
                 break;
             case 'P':
                ui->DISPLAYC->setPixmap(purple_pic.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
                if (sound6->state() == QMediaPlayer::PlayingState){
                    sound6->setPosition(0);
                }
                sound6->play();
                break;

         }
         // For back to back colors, shows discrepancy, also harder.
         delay(250);
         ui->DISPLAYC->clear();
         delay(_Delay);

    }
    delay(1);
    ui->DISPLAYC->clear();
    ui->textEdit->clear();

    ui->pushButton_2->setEnabled(true);
    ui->BlueButton->setEnabled(true);
    ui->YellowButton->setEnabled(true);
    ui->GreenButton->setEnabled(true);
    ui->OrangeButton->setEnabled(true);
    ui->RedButton->setEnabled(true);
    ui->PurpleButton->setEnabled(true);

    ui->label->setText("Match...");
}

//Starts the game, cleans up everything first then starts generating sequences./

void MainWindow::press_button(){

    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
    cleanUp();
    delay(1);
    generate();

}
