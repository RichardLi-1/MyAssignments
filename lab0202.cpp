//
// Created by Richard Li on 2025-09-23.
////
// Created by Richard Li on 2025-09-23.
//
#include <iostream>
using namespace std;

int main()
{
    int totalEmployees;
    double percentSenior;
    double percentJunior;
    double percentAdmin;

    int juniorEmployees;
    int adminEmployees;
    int seniorEmployees;


    int pencilBoxesNeeded;
    int penBoxesNeeded;
    int correctionFluidBoxesNeeded;

    cout << "Please enter the total number of employees: ";
    cin >> totalEmployees;
    cout << "Your company has " << totalEmployees << " employees" << endl;

    cout << "Please enter the percentage of employees who are Senior Engineers: " << endl;
    cin >> percentSenior;
    cout << percentSenior << "% of employees at your company are Senior Engineers" << endl;

    cout << "Please enter the percentage of employees who are Junior Engineers: " << endl;
    cin >> percentJunior;
    cout << percentJunior << "% of employees at your company are Junior Engineers" << endl;


    percentAdmin = 100 - percentSenior - percentJunior;
    cout << "Thus, " << percentAdmin << "% of employees at your company are administrative staff" << endl;



    juniorEmployees = totalEmployees*percentJunior*0.01;
    seniorEmployees = totalEmployees*percentSenior*0.01;
    adminEmployees = totalEmployees*percentAdmin*0.01;





    pencilBoxesNeeded = (juniorEmployees*8+adminEmployees*2+seniorEmployees*5+24)/25;
    penBoxesNeeded = (juniorEmployees*7+adminEmployees*6+seniorEmployees*3+9)/10;
    correctionFluidBoxesNeeded = ((juniorEmployees*60+adminEmployees*40+seniorEmployees*12)+199)/200;

    cout << "Number of pencil boxes needed: " << pencilBoxesNeeded << endl;
    cout << "Number of pen boxes needed: " << penBoxesNeeded << endl;
    cout << "Number of correction fluid bottles needed: " << correctionFluidBoxesNeeded << endl;

        return 0;
};

//SYDE121_LAB0202_H