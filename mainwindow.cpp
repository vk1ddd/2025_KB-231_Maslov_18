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

    ui->labelResultDetails->setText(QString("Ваш ИМТ: %1").arg(bmi));

    FitnessPlan plan;
    plan.setPlanByBMI(bmi);

    ui->textEditDiet->insertPlainText(plan.getDietPlan());
    ui->textEditTraining->insertPlainText(plan.getTrainingPlan());
}

