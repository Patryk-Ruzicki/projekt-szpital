// Plik: main.cpp
// Autor: Patryk Ruzicki, Krzysztof Łągiewczyk
// Data: 4 stycznia 2025
// Opis: Główny program zarządzający interakcją z użytkownikiem,
// umożliwiający wybór zabiegów chirurgicznych, leków oraz obliczanie całkowitego kosztu leczenia pacjenta.

#include <iostream>
#include <string>
#include <locale.h>

#include "patientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"
#include "patientAccount.cpp"
#include "Surgery.cpp"
#include "Pharmacy.cpp"

int main() {
    setlocale(LC_CTYPE, "Polish");

    PatientAccount patient;
    Surgery surgery;
    Pharmacy pharmacy;
    int choice;

    // Wprowadzenie liczby dni pobytu pacjenta w szpitalu
    std::cout << "Podaj liczbe dni pobytu w szpitalu: ";
    int days;
    std::cin >> days;
    patient.setDaysInHospital(days);

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Wybierz zabieg chirurgiczny\n";
        std::cout << "2. Wybierz lek\n";
        std::cout << "3. Wypisz pacjenta i pokaz koszt leczenia\n";
        std::cout << "Wybierz opcje: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                surgery.displaySurgeries();
                std::cout << "Wybierz zabieg: "; //Przyjmowanie i zapisywanie podanego zabiegu
                int surgeryChoice;
                std::cin >> surgeryChoice;
                surgery.performSurgery(patient, surgeryChoice);
                break;

            case 2:
                pharmacy.showMedicines();
                std::cout << "Wybierz lek: "; //Przyjmowanie i zapisywanie podanego leku
                int medicineChoice;
                std::cin >> medicineChoice;
                pharmacy.prescribeMedicine(patient, medicineChoice);
                break;

            case 3: {
                double stayCost = patient.calculateHospitalStayCost(); //Obliczanie i wyświetlanie całkowitego kosztu leczenia
                double totalCost = patient.getTotalCost() + stayCost;
                std::cout << "\nCalkowity koszt leczenia pacjenta: " << totalCost << " PLN\n";
                return 0;
            }

            default:
                std::cout << "Nieprawidlowy wybor. Spróbuj ponownie.\n";
                break;
        }
    }

    return 0;
}
