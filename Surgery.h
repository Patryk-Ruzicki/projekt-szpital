// Plik: Surgery.h
// Autor: Krystian Stróżczyk
// Data: 4 stycznia 2025
// Opis: Definicja klasy Surgery, która zarządza operacjami chirurgicznymi
// i kosztami związanymi z tymi operacjami.

#ifndef SURGERY_H
#define SURGERY_H

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "patientAccount.h"

class Surgery {
private:
    // Struktura reprezentująca zabieg chirurgiczny z jego nazwą i ceną
    struct Procedure {
        std::string surgeryName; ///< Nazwa zabiegu chirurgicznego
        int costOfProcedure; ///< Koszt zabiegu chirurgicznego
    };
    std::vector<Procedure> Operacje; ///< Lista dostępnych operacji

public:
    // Konstruktor klasy Surgery. Inicjuje listę dostępnych operacji.
    Surgery();

    // Wykonuje zabieg chirurgiczny i dodaje jego koszt do całkowitego kosztu leczenia pacjenta.
    void performSurgery(PatientAccount& patient, int choice);

    // Wyświetla dostępne operacje chirurgiczne.
    void displaySurgeries();
};

#endif
