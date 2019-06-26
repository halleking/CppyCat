#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <string>
#include <QMainWindow>
#include <QMediaPlayer>
#include <QProgressBar>

using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int count = 0;
    int progress = 0;
    string solution;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QProgressBar *progressBar;
    QMediaPlayer *sound1;
    QMediaPlayer *sound2;
    QMediaPlayer *sound3;
    QMediaPlayer *sound4;
    QMediaPlayer *sound5;
    QMediaPlayer *sound6;
    QMediaPlayer *fail;

private slots:
    void press_button();

    void press_blue();
    void press_yellow();
    void press_red();
    void press_orange();
    void press_green();
    void press_purple();

    void cleanUp();
    void delay(int n);
    void generate();
    void query();
};

#endif // MAINWINDOW_H
