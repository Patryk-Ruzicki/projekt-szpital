#include <iostream>
#include "patientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"

int main() {
    PatientAccount patient;
    Surgery surgery;
    Pharmacy pharmacy;
    int choice;

    std::cout << "Podaj liczbę dni pobytu w szpitalu: ";
    int days;
    std::cin >> days;
    patient.setDaysInHospital(days);

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Wybierz zabieg chirurgiczny\n";
        std::cout << "2. Wybierz lek\n";
        std::cout << "3. Wypisz pacjenta i pokaż koszt leczenia\n";
        std::cout << "Wybierz opcję: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                surgery.displaySurgeries();
                std::cout << "Wybierz zabieg: ";
                int surgeryChoice;
                std::cin >> surgeryChoice;
                surgery.performSurgery(patient, surgeryChoice);
                break;

            case 2:
                pharmacy.showMedicines();
                std::cout << "Wybierz lek: ";
                int medicineChoice;
                std::cin >> medicineChoice;
                pharmacy.prescribeMedicine(patient, medicineChoice);
                break;

            case 3: {
                double stayCost = patient.calculateHospitalStayCost();
                double totalCost = patient.getTotalCost() + stayCost;
                std::cout << "\nCałkowity koszt leczenia pacjenta: " << totalCost << " PLN\n";
                return 0;
            }

            default:
                std::cout << "Nieprawidłowy wybór. Spróbuj ponownie.\n";
                break;
        }
    }

    return 0;
}