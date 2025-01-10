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
#include "patientAccount.h"

class Pharmacy {
private:
    // Struktura reprezentująca lek z jego nazwą i ceną
    struct Medicine {
        std::string name; ///< Nazwa leku
        double cost; ///< Koszt leku
    };
    std::vector<Medicine> medicines; ///< Lista dostępnych leków

public:
    // Konstruktor klasy Pharmacy. Inicjuje listę dostępnych leków.
    Pharmacy();

    // Przypisuje lek pacjentowi i dodaje koszt leku do całkowitego kosztu leczenia.
    void prescribeMedicine(PatientAccount& patient, int choice);

    // Wyświetla dostępne leki w aptece.
    void showMedicines();
};

#endif
