// Plik: patientAccount.cpp
// Autor: Patryk Ruzicki
// Data: 4 stycznia 2025
// Opis: Implementacja klasy PatientAccount. Zawiera metody do obliczania kosztów
// leczenia pacjenta oraz zarządzania liczbą dni spędzonych w szpitalu.

#include "patientAccount.h"

// Konstruktor klasy PatientAccount
PatientAccount::PatientAccount() : totalCost(0), daysInHospital(0) {}

// Dodaje koszt leczenia do całkowitego kosztu pacjenta
void PatientAccount::addCost(double amount) {
    totalCost += amount;
}

// Ustawia liczbę dni spędzonych przez pacjenta w szpitalu
void PatientAccount::setDaysInHospital(int days) {
    daysInHospital = days;
}

// Oblicza koszt pobytu pacjenta w szpitalu na podstawie liczby dni
double PatientAccount::calculateHospitalStayCost() const {
    return daysInHospital * dailyRate;
}

// Zwraca całkowity koszt leczenia pacjenta
double PatientAccount::getTotalCost() const {
    return totalCost;
}
