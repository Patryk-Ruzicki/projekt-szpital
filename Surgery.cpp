#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

class Surgery{
public:
    string surgeryName;
    int costOfProcedure;
    Surgery(string O, int C) : surgeryName(O), costOfProcedure(C){}

    //void addToTotalCost(Operacje x, PatientAccount y){
        //
    //}

    void displaySurgeries(vector<Surgery> Operacje){
        for (const auto& surgery : Operacje){
            cout << surgery.surgeryName << " - " << surgery.costOfProcedure << " PLN" << endl; }
    }
};

int main(){
    vector<Surgery> Operacje;
    Surgery s1("Appendectomy", 3500);
    Surgery s2("Cholecystectomy", 5000);
    Surgery s3("Knee Arthroscopy", 7500);
    Surgery s4("Cataract Surgery", 4200);
    Surgery s5("Heart Bypass Surgery", 20000);

    Operacje.push_back(s1);
    Operacje.push_back(s2);
    Operacje.push_back(s3);
    Operacje.push_back(s4);
    Operacje.push_back(s5);

    s1.displaySurgeries(Operacje);
}
