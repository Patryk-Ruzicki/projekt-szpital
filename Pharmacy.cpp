// Plik: Pharmacy.cpp
// Autor: Krzysztof Łągiewczyk
// Data: 4 stycznia 2025
// Opis: Implementacja klasy Pharmacy. Zawiera metody do zarządzania lekami
// dostępnymi w aptece oraz przypisywania kosztów pacjentowi.

#include "Pharmacy.h"

Pharmacy::Pharmacy() {
    medicines.push_back({"Lek przeciwbolowy", 50.0});
    medicines.push_back({"Antybiotyk", 100.0});
    medicines.push_back({"Antydepresant", 200.0});
    medicines.push_back({"Szczepionka", 150.0});
    medicines.push_back({"Insulina", 300.0});
}

// Przypisuje lek pacjentowi i dodaje koszt leku do całkowitego kosztu leczenia
void Pharmacy::prescribeMedicine(PatientAccount& patient, int choice) {
    if (choice >= 1 && choice <= medicines.size()) {
        patient.addCost(medicines[choice - 1].cost);
    } else {
        std::cout << "Nieprawidlowy wybor leku.\n";
    }
}

void Pharmacy::showMedicines() {
    int colWidth = 22;
    std::cout << "+----+----------------------+----------------------+\n";
    std::cout << "| Nr | Nazwa leku           | Koszt leku           |\n";
    std::cout << "+----+----------------------+----------------------+\n";
    for (size_t i = 0; i < medicines.size(); ++i) {
        std::cout << "| " << std::setw(2) << std::left << i + 1 << " | "
                  << std::setw(colWidth - 2) << std::left << medicines[i].name << " | "
                  << std::setw(colWidth - 6) << std::left << medicines[i].cost << " PLN |\n";
    }
    std::cout << "+----+----------------------+----------------------+\n";
}