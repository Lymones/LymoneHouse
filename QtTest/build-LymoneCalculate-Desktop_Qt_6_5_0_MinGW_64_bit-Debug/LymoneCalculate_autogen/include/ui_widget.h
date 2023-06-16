/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextBrowser *textBrowser_2;
    QTextEdit *textEdit;
    QGroupBox *inputBox;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_36;
    QGroupBox *directBox;
    QPushButton *Button_OK;
    QPushButton *Button_Down;
    QPushButton *Button_Right;
    QPushButton *Button_Left;
    QPushButton *Button_Up;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(374, 521);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("user-home")));
        Widget->setWindowIcon(icon);
        textBrowser_2 = new QTextBrowser(Widget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(20, 80, 331, 51));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 20, 331, 51));
        inputBox = new QGroupBox(Widget);
        inputBox->setObjectName("inputBox");
        inputBox->setGeometry(QRect(20, 270, 331, 241));
        pushButton_6 = new QPushButton(inputBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(10, 30, 41, 41));
        pushButton_7 = new QPushButton(inputBox);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(60, 30, 41, 41));
        pushButton_8 = new QPushButton(inputBox);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(110, 30, 41, 41));
        pushButton_9 = new QPushButton(inputBox);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(160, 30, 41, 41));
        pushButton_10 = new QPushButton(inputBox);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(10, 80, 41, 41));
        pushButton_11 = new QPushButton(inputBox);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(60, 80, 41, 41));
        pushButton_12 = new QPushButton(inputBox);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(110, 80, 41, 41));
        pushButton_13 = new QPushButton(inputBox);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(160, 80, 41, 41));
        pushButton_14 = new QPushButton(inputBox);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(10, 130, 41, 41));
        pushButton_15 = new QPushButton(inputBox);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(60, 130, 41, 41));
        pushButton_16 = new QPushButton(inputBox);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(110, 130, 41, 41));
        pushButton_17 = new QPushButton(inputBox);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(160, 130, 41, 41));
        pushButton_30 = new QPushButton(inputBox);
        pushButton_30->setObjectName("pushButton_30");
        pushButton_30->setGeometry(QRect(210, 30, 41, 41));
        pushButton_31 = new QPushButton(inputBox);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setGeometry(QRect(210, 80, 41, 41));
        pushButton_32 = new QPushButton(inputBox);
        pushButton_32->setObjectName("pushButton_32");
        pushButton_32->setGeometry(QRect(210, 130, 41, 41));
        pushButton_33 = new QPushButton(inputBox);
        pushButton_33->setObjectName("pushButton_33");
        pushButton_33->setGeometry(QRect(160, 180, 41, 41));
        pushButton_34 = new QPushButton(inputBox);
        pushButton_34->setObjectName("pushButton_34");
        pushButton_34->setGeometry(QRect(210, 180, 41, 41));
        pushButton_35 = new QPushButton(inputBox);
        pushButton_35->setObjectName("pushButton_35");
        pushButton_35->setGeometry(QRect(110, 180, 41, 41));
        pushButton_36 = new QPushButton(inputBox);
        pushButton_36->setObjectName("pushButton_36");
        pushButton_36->setGeometry(QRect(10, 180, 91, 41));
        directBox = new QGroupBox(Widget);
        directBox->setObjectName("directBox");
        directBox->setGeometry(QRect(120, 130, 131, 141));
        directBox->setAcceptDrops(false);
        directBox->setFlat(false);
        directBox->setCheckable(false);
        Button_OK = new QPushButton(directBox);
        Button_OK->setObjectName("Button_OK");
        Button_OK->setGeometry(QRect(50, 60, 31, 31));
        Button_Down = new QPushButton(directBox);
        Button_Down->setObjectName("Button_Down");
        Button_Down->setGeometry(QRect(50, 100, 31, 31));
        Button_Right = new QPushButton(directBox);
        Button_Right->setObjectName("Button_Right");
        Button_Right->setGeometry(QRect(90, 60, 31, 31));
        Button_Left = new QPushButton(directBox);
        Button_Left->setObjectName("Button_Left");
        Button_Left->setGeometry(QRect(10, 60, 31, 31));
        Button_Up = new QPushButton(directBox);
        Button_Up->setObjectName("Button_Up");
        Button_Up->setGeometry(QRect(50, 20, 31, 31));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(260, 130, 91, 141));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 130, 91, 141));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\216\261\350\222\231\351\273\216\346\242\246\345\233\233\345\210\231\350\256\241\347\256\227\345\231\250Ver1.0", nullptr));
        inputBox->setTitle(QCoreApplication::translate("Widget", "\345\237\272\346\234\254\350\276\223\345\205\245", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "DEL", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Widget", "\303\227", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Widget", "+", nullptr));
        pushButton_30->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        pushButton_31->setText(QCoreApplication::translate("Widget", "\303\267", nullptr));
        pushButton_32->setText(QCoreApplication::translate("Widget", "-", nullptr));
        pushButton_33->setText(QCoreApplication::translate("Widget", "Ans", nullptr));
        pushButton_34->setText(QCoreApplication::translate("Widget", "=", nullptr));
        pushButton_35->setText(QCoreApplication::translate("Widget", ".", nullptr));
        pushButton_36->setText(QCoreApplication::translate("Widget", "0", nullptr));
        directBox->setTitle(QCoreApplication::translate("Widget", "\346\226\271\345\220\221\351\224\256\347\233\230", nullptr));
        Button_OK->setText(QCoreApplication::translate("Widget", "OK", nullptr));
        Button_Down->setText(QCoreApplication::translate("Widget", "\342\206\223", nullptr));
        Button_Right->setText(QCoreApplication::translate("Widget", "\342\206\222", nullptr));
        Button_Left->setText(QCoreApplication::translate("Widget", "\342\206\220", nullptr));
        Button_Up->setText(QCoreApplication::translate("Widget", "\342\206\221", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "Memory", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
