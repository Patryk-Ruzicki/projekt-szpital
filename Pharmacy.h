// Plik: Pharmacy.h
// Autor: Krzysztof Łągiewczyk
// Data: 5 stycznia 2025
// Opis: Definicja klasy Pharmacy, która zarządza listą leków dostępnych w aptece
// oraz umożliwia przypisywanie kosztów leków pacjentom.

#ifndef PHARMACY_H
#define PHARMACY_H

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "patientAccount.h"

class Pharmacy {
private:
    struct Medicine {
        std::string name;
        double cost;
    };
    std::vector<Medicine> medicines;

public:
    Pharmacy();

    void prescribeMedicine(PatientAccount& patient, int choice);

    void showMedicines();
};

#endif
