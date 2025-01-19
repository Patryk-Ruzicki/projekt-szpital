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
    struct Procedure {
        std::string surgeryName;
        int costOfProcedure;
    };
    std::vector<Procedure> Operacje;

public:
    Surgery();

    void performSurgery(PatientAccount& patient, int choice);

    void displaySurgeries();
};

#endif
