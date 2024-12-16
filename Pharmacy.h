#ifndef PHARMACY_H
#define PHARMACY_H

#include <iostream>
#include <vector>
#include <string>
#include "patientAccount.h"

class Pharmacy {
private:
    struct Medicine {
        std::string name;
        double cost;
    };
    std::vector<Medicine> medicines;
public:
    Pharmacy();
    void prescribeMedicine(PatientAccount& patient, int choice);
    void showMedicines();
};

#endif