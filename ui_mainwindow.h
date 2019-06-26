/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *RedButton;
    QPushButton *BlueButton;
    QPushButton *pushButton;
    QPushButton *YellowButton;
    QPushButton *GreenButton;
    QPushButton *pushButton_2;
    QPushButton *OrangeButton;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *SCORE;
    QLabel *DISPLAYC;
    QLabel *LOSE;
    QPushButton *PurpleButton;
    QProgressBar *progressBar;
    QLabel *title;
    QLabel *RATING;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *final_score;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(678, 475);
        MainWindow->setStyleSheet(QStringLiteral("background-color:black"));
        MainWindow->setAnimated(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RedButton = new QPushButton(centralWidget);
        RedButton->setObjectName(QStringLiteral("RedButton"));
        RedButton->setGeometry(QRect(100, 290, 81, 81));
        RedButton->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Buttons/red_button.png"), QSize(), QIcon::Normal, QIcon::Off);
        RedButton->setIcon(icon);
        RedButton->setIconSize(QSize(60, 60));
        RedButton->setFlat(true);
        BlueButton = new QPushButton(centralWidget);
        BlueButton->setObjectName(QStringLiteral("BlueButton"));
        BlueButton->setGeometry(QRect(420, 290, 81, 81));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Buttons/blue_button.png"), QSize(), QIcon::Normal, QIcon::Off);
        BlueButton->setIcon(icon1);
        BlueButton->setIconSize(QSize(60, 60));
        BlueButton->setFlat(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 380, 131, 61));
        pushButton->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Buttons/StartButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(100, 100));
        YellowButton = new QPushButton(centralWidget);
        YellowButton->setObjectName(QStringLiteral("YellowButton"));
        YellowButton->setGeometry(QRect(260, 290, 81, 81));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Buttons/yellow_button.png"), QSize(), QIcon::Normal, QIcon::Off);
        YellowButton->setIcon(icon3);
        YellowButton->setIconSize(QSize(60, 60));
        YellowButton->setFlat(true);
        GreenButton = new QPushButton(centralWidget);
        GreenButton->setObjectName(QStringLiteral("GreenButton"));
        GreenButton->setGeometry(QRect(340, 290, 81, 81));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Buttons/green_button.png"), QSize(), QIcon::Normal, QIcon::Off);
        GreenButton->setIcon(icon4);
        GreenButton->setIconSize(QSize(60, 60));
        GreenButton->setFlat(true);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 290, 71, 71));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_2->setPalette(palette);
        pushButton_2->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_2->setAutoFillBackground(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Buttons/sendbutton.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(50, 50));
        pushButton_2->setFlat(true);
        OrangeButton = new QPushButton(centralWidget);
        OrangeButton->setObjectName(QStringLiteral("OrangeButton"));
        OrangeButton->setGeometry(QRect(180, 290, 81, 81));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Buttons/orange_button.png"), QSize(), QIcon::Normal, QIcon::Off);
        OrangeButton->setIcon(icon6);
        OrangeButton->setIconSize(QSize(60, 60));
        OrangeButton->setFlat(true);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(110, 100, 141, 101));
        textEdit->setStyleSheet(QStringLiteral("background-color:white"));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(440, 100, 131, 101));
        textEdit_2->setStyleSheet(QStringLiteral("background-color:white"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 210, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("LCD Solid"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color: \"White\";\n"
"font: 24pt \"LCD Solid\""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 210, 91, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("color: White;\n"
"font:24pt \"LCD Solid\";"));
        SCORE = new QLabel(centralWidget);
        SCORE->setObjectName(QStringLiteral("SCORE"));
        SCORE->setGeometry(QRect(220, 210, 31, 31));
        SCORE->setFont(font);
        SCORE->setStyleSheet(QLatin1String("color: \"White\";\n"
"font: 24pt \"LCD Solid\";"));
        SCORE->setAlignment(Qt::AlignCenter);
        DISPLAYC = new QLabel(centralWidget);
        DISPLAYC->setObjectName(QStringLiteral("DISPLAYC"));
        DISPLAYC->setGeometry(QRect(300, 110, 91, 81));
        DISPLAYC->setAlignment(Qt::AlignCenter);
        LOSE = new QLabel(centralWidget);
        LOSE->setObjectName(QStringLiteral("LOSE"));
        LOSE->setGeometry(QRect(-10, 0, 694, 461));
        QFont font1;
        font1.setFamily(QStringLiteral("LCD Solid"));
        font1.setPointSize(42);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        LOSE->setFont(font1);
        LOSE->setStyleSheet(QLatin1String("color: white;\n"
"font: 42pt \"LCD Solid\";\n"
"background-color: black;"));
        LOSE->setAlignment(Qt::AlignCenter);
        PurpleButton = new QPushButton(centralWidget);
        PurpleButton->setObjectName(QStringLiteral("PurpleButton"));
        PurpleButton->setEnabled(true);
        PurpleButton->setGeometry(QRect(500, 290, 81, 81));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Buttons/purple_button.png"), QSize(), QIcon::Normal, QIcon::Off);
        PurpleButton->setIcon(icon7);
        PurpleButton->setIconSize(QSize(60, 60));
        PurpleButton->setFlat(true);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(430, 250, 151, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("LCD Solid"));
        progressBar->setFont(font2);
        progressBar->setStyleSheet(QLatin1String("QProgressBar{\n"
"border: 2px solid grey;\n"
"border-radius: 5px;\n"
"text-align: center;\n"
"color: white;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"width: 20px;\n"
"\n"
"}"));
        progressBar->setValue(0);
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setEnabled(true);
        title->setGeometry(QRect(90, 0, 451, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Bubble3D"));
        font3.setPointSize(65);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        title->setFont(font3);
        title->setStyleSheet(QLatin1String("QLabel{\n"
"font: \"Bubble3D\";\n"
"color: rgb(154, 133, 255);\n"
"background-color:rgba(255, 255, 255, 0);\n"
"\n"
"}\n"
""));
        title->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        RATING = new QLabel(centralWidget);
        RATING->setObjectName(QStringLiteral("RATING"));
        RATING->setGeometry(QRect(470, 270, 61, 41));
        RATING->setAutoFillBackground(false);
        RATING->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 681, 131));
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/neon-cat-clipart-4.gif")));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 50, 181, 131));
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Screen Shot 2018-03-12 at 9.11.32 PM.png")));
        final_score = new QLabel(centralWidget);
        final_score->setObjectName(QStringLiteral("final_score"));
        final_score->setGeometry(QRect(480, 230, 51, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("LCD Solid"));
        font4.setPointSize(42);
        final_score->setFont(font4);
        final_score->setStyleSheet(QLatin1String("color:white;\n"
"font: 42pt \"LCD Solid\";"));
        final_score->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        MainWindow->setCentralWidget(centralWidget);
        label_3->raise();
        RedButton->raise();
        BlueButton->raise();
        YellowButton->raise();
        GreenButton->raise();
        pushButton_2->raise();
        OrangeButton->raise();
        textEdit->raise();
        textEdit_2->raise();
        label->raise();
        label_2->raise();
        SCORE->raise();
        DISPLAYC->raise();
        PurpleButton->raise();
        progressBar->raise();
        LOSE->raise();
        title->raise();
        RATING->raise();
        label_4->raise();
        pushButton->raise();
        final_score->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        RedButton->setText(QString());
        BlueButton->setText(QString());
        pushButton->setText(QString());
        YellowButton->setText(QString());
        GreenButton->setText(QString());
        pushButton_2->setText(QString());
        OrangeButton->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Match...", 0));
        label_2->setText(QApplication::translate("MainWindow", "Score:", 0));
        SCORE->setText(QApplication::translate("MainWindow", "0", 0));
        DISPLAYC->setText(QString());
        LOSE->setText(QString());
        PurpleButton->setText(QString());
        title->setText(QApplication::translate("MainWindow", "CPP-Y CAT", 0));
        RATING->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        final_score->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
