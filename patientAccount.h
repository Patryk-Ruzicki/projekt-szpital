// Plik: patientAccount.h
// Autor: Patryk Ruzicki
// Data: 4 stycznia 2025
// Opis: Definicja klasy PatientAccount, która przechowuje dane dotyczące kosztów leczenia pacjenta
// oraz liczby dni spędzonych w szpitalu. Klasa umożliwia dodawanie kosztów leczenia
// i obliczanie całkowitego kosztu pobytu pacjenta.
#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

#include <iostream>

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
