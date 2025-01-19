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
    double totalCost; ///< Całkowity koszt leczenia pacjenta
    int daysInHospital; ///< Liczba dni spędzonych w szpitalu
    static constexpr double dailyRate = 500.0; ///< Stawka dzienna za pobyt w szpitalu

public:
    // Konstruktor klasy PatientAccount. Inicjuje koszty leczenia na 0 i dni w szpitalu na 0.
    PatientAccount();

    // Aktualizuje całkowity koszt leczenia o podaną kwotę.
    void addCost(double amount);

    // Ustawia liczbę dni pobytu pacjenta w szpitalu.
    void setDaysInHospital(int days);

    // Oblicza koszt pobytu pacjenta w szpitalu na podstawie liczby dni.
    double calculateHospitalStayCost() const;

    // Zwraca całkowity koszt leczenia pacjenta.
    double getTotalCost() const;
};

#endif