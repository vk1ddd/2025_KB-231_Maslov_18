/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidgetMain;
    QWidget *tab_3;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditAge;
    QLabel *label_2;
    QLineEdit *lineEditHeight;
    QLabel *label_3;
    QLineEdit *lineEditWeight;
    QLabel *label_4;
    QComboBox *comboBoxActivity;
    QPushButton *pushButtonCalculate;
    QWidget *tab_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 585);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidgetMain = new QTabWidget(centralwidget);
        tabWidgetMain->setObjectName("tabWidgetMain");
        tabWidgetMain->setGeometry(QRect(10, 10, 771, 531));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 10, 749, 250));
        groupBox_2->setMinimumSize(QSize(749, 250));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 20, 751, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 5, 590, 5);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEditAge = new QLineEdit(verticalLayoutWidget);
        lineEditAge->setObjectName("lineEditAge");

        verticalLayout->addWidget(lineEditAge);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEditHeight = new QLineEdit(verticalLayoutWidget);
        lineEditHeight->setObjectName("lineEditHeight");

        verticalLayout->addWidget(lineEditHeight);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEditWeight = new QLineEdit(verticalLayoutWidget);
        lineEditWeight->setObjectName("lineEditWeight");

        verticalLayout->addWidget(lineEditWeight);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        comboBoxActivity = new QComboBox(verticalLayoutWidget);
        comboBoxActivity->addItem(QString());
        comboBoxActivity->addItem(QString());
        comboBoxActivity->addItem(QString());
        comboBoxActivity->setObjectName("comboBoxActivity");

        verticalLayout->addWidget(comboBoxActivity);

        pushButtonCalculate = new QPushButton(tab_3);
        pushButtonCalculate->setObjectName("pushButtonCalculate");
        pushButtonCalculate->setGeometry(QRect(330, 280, 121, 41));
        tabWidgetMain->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidgetMain->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidgetMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\321\201\321\202 (\321\201\320\274)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\201 (\320\272\320\263)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \320\260\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\320\270", nullptr));
        comboBoxActivity->setItemText(0, QCoreApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\320\272\320\270\320\271", nullptr));
        comboBoxActivity->setItemText(1, QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271", nullptr));
        comboBoxActivity->setItemText(2, QCoreApplication::translate("MainWindow", "\320\235\320\270\320\267\320\272\320\270\320\271", nullptr));

        pushButtonCalculate->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\240\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
