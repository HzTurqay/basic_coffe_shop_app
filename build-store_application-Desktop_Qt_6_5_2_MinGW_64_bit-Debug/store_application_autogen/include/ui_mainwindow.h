/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *kola_price;
    QLabel *ice_tea;
    QLabel *americano_price;
    QPushButton *add_cola;
    QLabel *kola;
    QLabel *americano;
    QPushButton *add_sprite;
    QLabel *ice_tea_price;
    QLabel *pepsi;
    QPushButton *add_ice_tea;
    QLabel *sprite_price;
    QLabel *sprite;
    QPushButton *add_pepsi;
    QLabel *pepsi_price;
    QLabel *title;
    QPushButton *add_americano;
    QPushButton *go_to_basket;
    QLabel *empty;
    QWidget *page_3;
    QLabel *title_2;
    QLabel *americano_4;
    QLabel *pay_total_price;
    QLabel *americano_5;
    QLabel *americano_6;
    QTextEdit *text_name;
    QTextEdit *text_card_num;
    QPushButton *aproove_button;
    QWidget *page_2;
    QLabel *americano_3;
    QLabel *title_3;
    QListWidget *bascet_list;
    QLabel *total_price;
    QPushButton *pay_button;
    QPushButton *back_button;
    QWidget *page_4;
    QLabel *title_4;
    QPushButton *again_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(468, 434);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, 0, 461, 391));
        page = new QWidget();
        page->setObjectName("page");
        kola_price = new QLabel(page);
        kola_price->setObjectName("kola_price");
        kola_price->setGeometry(QRect(180, 40, 31, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Script")});
        font.setPointSize(27);
        font.setBold(true);
        kola_price->setFont(font);
        ice_tea = new QLabel(page);
        ice_tea->setObjectName("ice_tea");
        ice_tea->setGeometry(QRect(10, 170, 161, 51));
        ice_tea->setFont(font);
        americano_price = new QLabel(page);
        americano_price->setObjectName("americano_price");
        americano_price->setGeometry(QRect(180, 210, 31, 51));
        americano_price->setFont(font);
        add_cola = new QPushButton(page);
        add_cola->setObjectName("add_cola");
        add_cola->setGeometry(QRect(240, 50, 75, 24));
        kola = new QLabel(page);
        kola->setObjectName("kola");
        kola->setGeometry(QRect(10, 40, 161, 51));
        kola->setFont(font);
        americano = new QLabel(page);
        americano->setObjectName("americano");
        americano->setGeometry(QRect(10, 210, 161, 51));
        americano->setFont(font);
        add_sprite = new QPushButton(page);
        add_sprite->setObjectName("add_sprite");
        add_sprite->setGeometry(QRect(240, 140, 75, 24));
        ice_tea_price = new QLabel(page);
        ice_tea_price->setObjectName("ice_tea_price");
        ice_tea_price->setGeometry(QRect(180, 170, 31, 51));
        ice_tea_price->setFont(font);
        pepsi = new QLabel(page);
        pepsi->setObjectName("pepsi");
        pepsi->setGeometry(QRect(10, 90, 161, 51));
        pepsi->setFont(font);
        add_ice_tea = new QPushButton(page);
        add_ice_tea->setObjectName("add_ice_tea");
        add_ice_tea->setGeometry(QRect(240, 180, 75, 24));
        sprite_price = new QLabel(page);
        sprite_price->setObjectName("sprite_price");
        sprite_price->setGeometry(QRect(180, 130, 31, 51));
        sprite_price->setFont(font);
        sprite = new QLabel(page);
        sprite->setObjectName("sprite");
        sprite->setGeometry(QRect(10, 130, 161, 51));
        sprite->setFont(font);
        add_pepsi = new QPushButton(page);
        add_pepsi->setObjectName("add_pepsi");
        add_pepsi->setGeometry(QRect(240, 100, 75, 24));
        pepsi_price = new QLabel(page);
        pepsi_price->setObjectName("pepsi_price");
        pepsi_price->setGeometry(QRect(180, 90, 31, 51));
        pepsi_price->setFont(font);
        title = new QLabel(page);
        title->setObjectName("title");
        title->setGeometry(QRect(180, 0, 171, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        title->setFont(font1);
        add_americano = new QPushButton(page);
        add_americano->setObjectName("add_americano");
        add_americano->setGeometry(QRect(240, 220, 75, 24));
        go_to_basket = new QPushButton(page);
        go_to_basket->setObjectName("go_to_basket");
        go_to_basket->setGeometry(QRect(164, 270, 91, 24));
        empty = new QLabel(page);
        empty->setObjectName("empty");
        empty->setGeometry(QRect(350, 340, 49, 16));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        title_2 = new QLabel(page_3);
        title_2->setObjectName("title_2");
        title_2->setGeometry(QRect(200, 10, 171, 51));
        title_2->setFont(font1);
        americano_4 = new QLabel(page_3);
        americano_4->setObjectName("americano_4");
        americano_4->setGeometry(QRect(100, 80, 101, 51));
        americano_4->setFont(font);
        pay_total_price = new QLabel(page_3);
        pay_total_price->setObjectName("pay_total_price");
        pay_total_price->setGeometry(QRect(240, 80, 101, 51));
        pay_total_price->setFont(font);
        americano_5 = new QLabel(page_3);
        americano_5->setObjectName("americano_5");
        americano_5->setGeometry(QRect(90, 200, 101, 51));
        americano_5->setFont(font);
        americano_6 = new QLabel(page_3);
        americano_6->setObjectName("americano_6");
        americano_6->setGeometry(QRect(20, 250, 191, 51));
        americano_6->setFont(font);
        text_name = new QTextEdit(page_3);
        text_name->setObjectName("text_name");
        text_name->setGeometry(QRect(200, 210, 241, 31));
        text_card_num = new QTextEdit(page_3);
        text_card_num->setObjectName("text_card_num");
        text_card_num->setGeometry(QRect(200, 250, 241, 31));
        aproove_button = new QPushButton(page_3);
        aproove_button->setObjectName("aproove_button");
        aproove_button->setGeometry(QRect(180, 310, 91, 24));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        americano_3 = new QLabel(page_2);
        americano_3->setObjectName("americano_3");
        americano_3->setGeometry(QRect(110, 270, 101, 51));
        americano_3->setFont(font);
        title_3 = new QLabel(page_2);
        title_3->setObjectName("title_3");
        title_3->setGeometry(QRect(200, 20, 171, 51));
        title_3->setFont(font1);
        bascet_list = new QListWidget(page_2);
        bascet_list->setObjectName("bascet_list");
        bascet_list->setGeometry(QRect(110, 70, 256, 192));
        total_price = new QLabel(page_2);
        total_price->setObjectName("total_price");
        total_price->setGeometry(QRect(250, 270, 101, 51));
        total_price->setFont(font);
        pay_button = new QPushButton(page_2);
        pay_button->setObjectName("pay_button");
        pay_button->setGeometry(QRect(280, 320, 91, 24));
        back_button = new QPushButton(page_2);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(100, 320, 91, 24));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        title_4 = new QLabel(page_4);
        title_4->setObjectName("title_4");
        title_4->setGeometry(QRect(140, 70, 171, 51));
        title_4->setFont(font1);
        again_button = new QPushButton(page_4);
        again_button->setObjectName("again_button");
        again_button->setGeometry(QRect(150, 170, 131, 41));
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 468, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        kola_price->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        ice_tea->setText(QCoreApplication::translate("MainWindow", "ICE TEA", nullptr));
        americano_price->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        add_cola->setText(QCoreApplication::translate("MainWindow", "\306\217lav\311\231 et", nullptr));
        kola->setText(QCoreApplication::translate("MainWindow", "COCA-COLA", nullptr));
        americano->setText(QCoreApplication::translate("MainWindow", "AMERICANO", nullptr));
        add_sprite->setText(QCoreApplication::translate("MainWindow", "\306\217lav\311\231 et", nullptr));
        ice_tea_price->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pepsi->setText(QCoreApplication::translate("MainWindow", "PEPSI", nullptr));
        add_ice_tea->setText(QCoreApplication::translate("MainWindow", "\306\217lav\311\231 et", nullptr));
        sprite_price->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        sprite->setText(QCoreApplication::translate("MainWindow", "SPRITE", nullptr));
        add_pepsi->setText(QCoreApplication::translate("MainWindow", "\306\217lav\311\231 et", nullptr));
        pepsi_price->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Turqay Store", nullptr));
        add_americano->setText(QCoreApplication::translate("MainWindow", "\306\217lav\311\231 et", nullptr));
        go_to_basket->setText(QCoreApplication::translate("MainWindow", "S\306\217B\306\217T\306\217 KE\303\207", nullptr));
        empty->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        title_2->setText(QCoreApplication::translate("MainWindow", "\303\226D\306\217N\304\260\305\236 :", nullptr));
        americano_4->setText(QCoreApplication::translate("MainWindow", "TOTAL :", nullptr));
        pay_total_price->setText(QString());
        americano_5->setText(QCoreApplication::translate("MainWindow", "AD :", nullptr));
        americano_6->setText(QCoreApplication::translate("MainWindow", "KART N\303\226MR\306\217S\304\260 :", nullptr));
        aproove_button->setText(QCoreApplication::translate("MainWindow", "T\306\217ST\304\260QL\306\217", nullptr));
        americano_3->setText(QCoreApplication::translate("MainWindow", "TOTAL :", nullptr));
        title_3->setText(QCoreApplication::translate("MainWindow", "S\306\217B\306\217T", nullptr));
        total_price->setText(QString());
        pay_button->setText(QCoreApplication::translate("MainWindow", "\303\226D\306\217", nullptr));
        back_button->setText(QCoreApplication::translate("MainWindow", "GER\304\260 QAYIT", nullptr));
        title_4->setText(QCoreApplication::translate("MainWindow", "sa\304\237 olun", nullptr));
        again_button->setText(QCoreApplication::translate("MainWindow", "YEN\304\260D\306\217N BA\305\236LA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
