#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "userprofile.h"
#include "smart_ptr.h"
#include "fitnessplan.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCalculate_clicked()
{
    int age = ui->lineEditAge->text().toInt();
    double height = ui->lineEditHeight->text().toDouble();
    double weight = ui->lineEditWeight->text().toDouble();

    smart_ptr<UserProfile> user(new UserProfile(age, height, weight));
    double bmi = user->calculateBMI();

    if (bmi < 20){
        ui->labelResultDetails->setText(QString("Ваш ИМТ: %1, дефицит веса").arg(bmi));
    }else if (bmi < 25){
        ui->labelResultDetails->setText(QString("Ваш ИМТ: %1, норма").arg(bmi));
    }else if (bmi < 30){
        ui->labelResultDetails->setText(QString("Ваш ИМТ: %1, незначительный избыточный вес").arg(bmi));
    }else if (bmi < 40){
        ui->labelResultDetails->setText(QString("Ваш ИМТ: %1, ожирение").arg(bmi));
    }else{
        ui->labelResultDetails->setText(QString("Ваш ИМТ: %1, ожирение, опасно для здоровья").arg(bmi));
    }

    FitnessPlan plan;
    plan.setPlanByBMI(bmi);

    ui->textEditDiet->insertPlainText(plan.getDietPlan());
    ui->textEditTraining->insertPlainText(plan.getTrainingPlan());
}
