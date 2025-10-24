//
// Created by Richard Li on 2025-09-26.
//


#include <iostream>
#include <iomanip>
using namespace std;





int main(){
    double numerator;
    double denominator;
    double result;

    try {
        cout << "Please enter the numerator, followed by the denominator: ";

        cin >> numerator >> denominator;
        result = numerator / denominator;

        cout << fixed << setprecision(2);
        cout << "\nDividing "  << numerator << " by " << denominator << " gives " << result << "." << endl;

    }
    catch (std::exception){
        return 1;
    }



}
