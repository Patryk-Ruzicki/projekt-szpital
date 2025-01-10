// Plik: surgery.cpp
// Autor: Krystian Stróżczyk
// Data: 4 stycznia 2025
// Opis: Implementacja klasy Surgery. Zawiera metody do zarządzania operacjami chirurgicznymi
// oraz przypisywania kosztów operacji pacjentowi.

#include "Surgery.h"

// Konstruktor klasy Surgery. Inicjuje listę dostępnych operacji chirurgicznych.
Surgery::Surgery() {
     Operacje.push_back({"Wyciecie wyrostka", 3500});
    Operacje.push_back({"Wyciecie pecherzyka zolciowego", 5000});
    Operacje.push_back({"Artroskopia kolana", 7500});
    Operacje.push_back({"Operacja zacmy", 4200});
    Operacje.push_back({"Bypass serca", 20000});
}

// Wykonuje zabieg chirurgiczny i dodaje koszt zabiegu do całkowitego kosztu leczenia pacjenta
void Surgery::performSurgery(PatientAccount& patient, int choice) {
    if (choice >= 1 && choice <= Operacje.size()) {
        patient.addCost(Operacje[choice - 1].costOfProcedure);
    } else {
        std::cout << "Nieprawidłowy wybór operacji.\n";
    }
}

// Wyświetla dostępne operacje chirurgiczne
void Surgery::displaySurgeries() {
    for (size_t i = 0; i < Operacje.size(); ++i) {
        std::cout << i + 1 << ". " << Operacje[i].surgeryName << " - " << Operacje[i].costOfProcedure << " PLN" << std::endl;
    }
}
