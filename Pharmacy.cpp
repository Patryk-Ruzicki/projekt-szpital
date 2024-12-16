#include "Pharmacy.h"

Pharmacy::Pharmacy() {
    medicines.push_back({"Lek przeciwbólowy", 50.0});
    medicines.push_back({"Antybiotyk", 100.0});
    medicines.push_back({"Antydepresant", 200.0});
    medicines.push_back({"Szczepionka", 150.0});
    medicines.push_back({"Insulina", 300.0});
}

void Pharmacy::prescribeMedicine(PatientAccount& patient, int choice) {
    if (choice >= 1 && choice <= medicines.size()) {
        patient.addCost(medicines[choice - 1].cost);
    } else {
        std::cout << "Nieprawidłowy wybór leku.\n";
    }
}

void Pharmacy::showMedicines() {
    std::cout << "Dostępne leki:\n";
    for (size_t i = 0; i < medicines.size(); ++i) {
        std::cout << i + 1 << ". " << medicines[i].name << " - " << medicines[i].cost << " zł\n";
    }
}