#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

class PatientAccount {
private:
    double totalCost;
    int daysInHospital;
    static constexpr double dailyRate = 500.0;

public:
    PatientAccount();
    void addCost(double amount);
    void setDaysInHospital(int days);
    double calculateHospitalStayCost() const;
    double getTotalCost() const;
};

#endif