// Plik: patientAccount.cpp
// Autor: Patryk Ruzicki
// Data: 4 stycznia 2025
// Opis: Implementacja klasy PatientAccount. Zawiera metody do obliczania kosztów
// leczenia pacjenta oraz zarządzania liczbą dni spędzonych w szpitalu.

#include "patientAccount.h"

PatientAccount::PatientAccount() : totalCost(0), daysInHospital(0) {}

void PatientAccount::addCost(double amount) {
    totalCost += amount;
}

void PatientAccount::setDaysInHospital(int days) {
    daysInHospital = days;
}

double PatientAccount::calculateHospitalStayCost() const {
    return daysInHospital * dailyRate;
}

double PatientAccount::getTotalCost() const {
    return totalCost;
}
