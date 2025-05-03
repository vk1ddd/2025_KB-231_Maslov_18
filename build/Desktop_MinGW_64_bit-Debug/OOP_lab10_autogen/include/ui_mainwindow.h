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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
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
    QWidget *tabInput;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditAge;
    QLabel *label_2;
    QLineEdit *lineEditHeight;
    QLabel *label_3;
    QLineEdit *lineEditWeight;
    QPushButton *pushButtonCalculate;
    QWidget *tabRecommendations;
    QGroupBox *groupBoxResult;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelResultDetails;
    QTabWidget *tabWidgetOptions;
    QWidget *tabDiets;
    QListWidget *listWidget_2;
    QWidget *tabTrainings;
    QListWidget *listWidget;
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
        tabInput = new QWidget();
        tabInput->setObjectName("tabInput");
        groupBox_2 = new QGroupBox(tabInput);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 10, 749, 261));
        groupBox_2->setMinimumSize(QSize(749, 250));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 20, 751, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 5, 590, 15);
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

        pushButtonCalculate = new QPushButton(tabInput);
        pushButtonCalculate->setObjectName("pushButtonCalculate");
        pushButtonCalculate->setGeometry(QRect(330, 290, 121, 41));
        tabWidgetMain->addTab(tabInput, QString());
        tabRecommendations = new QWidget();
        tabRecommendations->setObjectName("tabRecommendations");
        groupBoxResult = new QGroupBox(tabRecommendations);
        groupBoxResult->setObjectName("groupBoxResult");
        groupBoxResult->setGeometry(QRect(10, 20, 741, 150));
        verticalLayoutWidget_2 = new QWidget(groupBoxResult);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 20, 856, 131));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(100, 20, 100, 20);
        labelResultDetails = new QLabel(verticalLayoutWidget_2);
        labelResultDetails->setObjectName("labelResultDetails");
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(16);
        font.setBold(true);
        font.setUnderline(false);
        labelResultDetails->setFont(font);

        verticalLayout_2->addWidget(labelResultDetails);

        tabWidgetOptions = new QTabWidget(tabRecommendations);
        tabWidgetOptions->setObjectName("tabWidgetOptions");
        tabWidgetOptions->setGeometry(QRect(10, 190, 741, 301));
        tabDiets = new QWidget();
        tabDiets->setObjectName("tabDiets");
        listWidget_2 = new QListWidget(tabDiets);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(0, 0, 741, 271));
        tabWidgetOptions->addTab(tabDiets, QString());
        tabTrainings = new QWidget();
        tabTrainings->setObjectName("tabTrainings");
        listWidget = new QListWidget(tabTrainings);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 0, 741, 271));
        tabWidgetOptions->addTab(tabTrainings, QString());
        tabWidgetMain->addTab(tabRecommendations, QString());
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
        tabWidgetOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\321\201\321\202 (\321\201\320\274)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\201 (\320\272\320\263)", nullptr));
        pushButtonCalculate->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabInput), QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        groupBoxResult->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        labelResultDetails->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265, \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\272\320\265 \"\320\224\320\260\320\275\320\275\321\213\320\265\"", nullptr));
        tabWidgetOptions->setTabText(tabWidgetOptions->indexOf(tabDiets), QCoreApplication::translate("MainWindow", "\320\224\320\270\320\265\321\202\321\213", nullptr));
        tabWidgetOptions->setTabText(tabWidgetOptions->indexOf(tabTrainings), QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabRecommendations), QCoreApplication::translate("MainWindow", "\320\240\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
