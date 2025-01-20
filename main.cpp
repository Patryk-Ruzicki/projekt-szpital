// Plik: main.cpp
// Autor: Patryk Ruzicki, Krzysztof Łągiewczyk
// Data: 4 stycznia 2025
// Opis: Główny program zarządzający interakcją z użytkownikiem,
// umożliwiający wybór zabiegów chirurgicznych, leków oraz obliczanie całkowitego kosztu leczenia pacjenta.

#include <iostream>
#include <string>
#include <iomanip>
#include <locale.h>
#include <limits>

#include "patientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"

int main() {
    setlocale(LC_CTYPE, "Polish");

    PatientAccount patient;
    Surgery surgery;
    Pharmacy pharmacy;
    int choice;

    // Wprowadzenie liczby dni pobytu pacjenta w szpitalu
    int days;
    do {
        std::cout << "> Podaj liczbe dni pobytu w szpitalu: ";
        std::cin >> days;
        
        if (std::cin.fail() || days <= 0) {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Nie poprawna wartosc! ";
        } else {
            patient.setDaysInHospital(days);
            break;
        }
    } while (true);


    while (true) {
        do {
            std::cout << "\nMenu:\n";
            std::cout << "1. Wybierz zabieg chirurgiczny\n";
            std::cout << "2. Wybierz lek\n";
            std::cout << "3. Wypisz pacjenta i pokaz koszt leczenia\n";
            std::cout << "> Wybierz ponownie: ";
            std::cin >> choice;
            
            if (std::cin.fail()) {
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Nie poprawna wartosc!" << std::endl;
            } else {
                break;
            }
        } while (true);

        switch (choice) {
            case 1:
                int surgeryChoice;
                do {
                    surgery.displaySurgeries();
                    std::cout << "> Wybierz zabieg: "; //Przyjmowanie i zapisywanie podanego zabiegu
                    std::cin >> surgeryChoice;
                    
                    if (std::cin.fail() || surgeryChoice < 1 || surgeryChoice > 5) {
                        std::cin.clear(); 
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Nie poprawna wartosc!" << std::endl;
                    } else {
                        surgery.performSurgery(patient, surgeryChoice);
                        break;
                    }
                } while (true);
                break;

            case 2:
                int medicineChoice;
                do {
                    pharmacy.showMedicines();
                    std::cout << "> Wybierz lek: "; //Przyjmowanie i zapisywanie podanego leku
                    std::cin >> medicineChoice;
                    
                    if (std::cin.fail() || medicineChoice < 1 || medicineChoice > 5) {
                        std::cin.clear(); 
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Nie poprawna wartosc!" << std::endl;
                    } else {
                        pharmacy.prescribeMedicine(patient, medicineChoice);
                        break;
                    }
                } while (true);
                break;

            case 3: {
                double stayCost = patient.calculateHospitalStayCost(); //Obliczanie i wyświetlanie całkowitego kosztu leczenia
                double totalCost = patient.getTotalCost() + stayCost;

                std::cout << std::fixed << std::setprecision(2);
    
                std::cout << "+--------------------+--------------------+\n";
                std::cout << "| Koszt pobytu       | Całkowity koszt    |\n";
                std::cout << "+--------------------+--------------------+\n";
                std::cout << "| " << std::setw(18) << stayCost << " | " << std::setw(14) << totalCost << " PLN |\n";
                std::cout << "+--------------------+--------------------+\n";
                
                return 0;
            }

            default:
                std::cout << "Nieprawidlowy wybor. Spróbuj ponownie.\n";
                break;
        }
    }

    return 0;
}
