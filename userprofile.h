#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <QString>

class UserProfile {
private:
    int m_age;
    double m_height;
    double m_weight;

public:
    UserProfile();
    UserProfile(int age, double height, double weight);

    int getAge() const;
    double getHeight() const;
    double getWeight() const;
    void setAge(int age);
    void setHeight(double height);
    void setWeight(double weight);
    double calculateBMI() const;
};

#endif // USERPROFILE_H
