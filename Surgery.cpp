#include "Surgery.h"

Surgery::Surgery() {
    Operacje.push_back({"Appendectomy", 3500});
    Operacje.push_back({"Cholecystectomy", 5000});
    Operacje.push_back({"Knee Arthroscopy", 7500});
    Operacje.push_back({"Cataract Surgery", 4200});
    Operacje.push_back({"Heart Bypass Surgery", 20000});
}

void Surgery::performSurgery(PatientAccount& patient, int choice) {
    if (choice >= 1 && choice <= Operacje.size()) {
        patient.addCost(Operacje[choice - 1].costOfProcedure);
    } else {
        std::cout << "Nieprawidłowy wybór operacji.\n";
    }
}

void Surgery::displaySurgeries() {
    for (size_t i = 0; i < Operacje.size(); ++i) {
        std::cout << i + 1 << ". " << Operacje[i].surgeryName << " - " << Operacje[i].costOfProcedure << " PLN" << std::endl;
    }
}