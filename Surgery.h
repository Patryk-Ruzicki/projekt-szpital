#ifndef SURGERY_H
#define SURGERY_H

#include <iostream>
#include <vector>
#include <string>
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