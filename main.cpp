#include <iostream>
#include <string>
#include "patientAccount.h"

using namespace std;

void displayMenu() {
    cout << "\n=== Menu ===\n";
    cout << "1. Ustaw liczbę dni pobytu\n";
    cout << "2. Dodaj koszt zabiegu\n";
    cout << "3. Dodaj koszt leku\n";
    cout << "4. Wypisz pacjenta\n";
    cout << "5. Wyjście\n";
    cout << "Twój wybór: ";
}

int main() {
    PatientAccount account;
    int choice = 0;

    while (choice != 5) {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            int days;
            cout << "Podaj liczbę dni pobytu: ";
            cin >> days;
            account.setDaysInHospital(days);
            cout << "Liczba dni ustawiona.\n";
            break;
        }
        case 2: {
            double cost;
            cout << "Podaj koszt zabiegu: ";
            cin >> cost;
            account.addCost(cost);
            cout << "Koszt zabiegu dodany.\n";
            break;
        }
        case 3: {
            double cost;
            cout << "Podaj koszt leku: ";
            cin >> cost;
            account.addCost(cost);
            cout << "Koszt leku dodany.\n";
            break;
        }
        case 4: {
            double stayCost = account.calculateHospitalStayCost();
            double totalCost = account.getTotalCost() + stayCost;
            cout << "\nCałkowity koszt leczenia pacjenta: " << totalCost << " PLN\n";
            break;
        }
        case 5:
            cout << "Zakończenie programu.\n";
            break;
        default:
            cout << "Nieprawidłowy wybór. Spróbuj ponownie.\n";
        }
    }

    return 0;
}
