#include "userprofile.h"

UserProfile::UserProfile()
    : m_age(0), m_height(0.0), m_weight(0.0)
{
}

UserProfile::UserProfile(int age, double height, double weight)
    : m_age(age), m_height(height), m_weight(weight)
{
}

int UserProfile::getAge() const {
    return m_age;
}

double UserProfile::getHeight() const {
    return m_height;
}

double UserProfile::getWeight() const {
    return m_weight;
}

void UserProfile::setAge(int age) {
    m_age = age;
}

void UserProfile::setHeight(double height) {
    m_height = height;
}

void UserProfile::setWeight(double weight) {
    m_weight = weight;
}

double UserProfile::calculateBMI() const {
    double heightMeters = m_height / 100.0;
    if (heightMeters > 0)
        return m_weight / (heightMeters * heightMeters);
    return 0.0;
}
