#ifndef FITNESSPLAN_H
#define FITNESSPLAN_H

#include <QString>

class FitnessPlan {
private:
    QString dietPlan;
    QString trainingPlan;
    void generatePlanForLowOrNormalBMI();
    void generatePlanForHighBMI();

public:
    FitnessPlan();
    void setPlanByBMI(double bmi);
    QString getDietPlan() const;
    QString getTrainingPlan() const;
};

#endif // FITNESSPLAN_H
