//
// Created by Richard Li on 2025-10-19.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int manager_count = 0;
    double manager_pay = 0.0;
    int commission_count = 0;
    double commission_pay = 0.0;
    int piece_count = 0;
    double hourly_pay = 0.0;
    int hourly_count = 0;
    double piece_pay = 0.0;

    int inputNumber = 0;
    double input = 0.0;
    double input2 = 0.0;

    bool running = true;
    while (running) {

        cin >> inputNumber;

        if (input<-1) {
            return 1;
        }

        switch(inputNumber){

            case 1: manager_count += 1;
                cin >> input;
                if (input<0) {
                    return 1;
                }
                manager_pay += input;
                break;
            case 2: hourly_count += 1;
                cin >> input >> input2;
                if (input<0 || input2<0) {
                    return 1;
                }
                if (input>40) {
                    input = 40+ (input-40)*1.5;
                }
                hourly_pay += input*input2;
                break;
            case 3: commission_count += 1;
                cin >> input;
                if (input<0) {
                    return 1;
                }
                commission_pay += 250 + input*0.057;
                break;
            case 4: piece_count += 1;
                cin >> input >> input2;
                if (input<0 || input2<0) {
                    return 1;
                }
                piece_pay += input * input2;
                break;
            case -1: running = false;
                break;
            default: return 1;
        }
    }




    cout << "Summary\n";
    cout << "Worker Type    Number      Total Pay\n";
    cout << "====================================\n";
    cout << "Manager        ";
    cout << setw(4) << manager_count;
    cout << "       ";
    cout << fixed << setprecision (2) << setw(9) << manager_pay;
    cout << endl;
    cout << "Hourly         ";
    cout << setw(4) << hourly_count;
    cout << "       ";
    cout << fixed << setprecision (2) << setw(9) << hourly_pay;
    cout << endl;
    cout << "Commission     ";
    cout << setw(4) << commission_count;
    cout << "       ";
    cout << fixed << setprecision (2) << setw(9) << commission_pay;
    cout << endl;
    cout << "Piece          ";
    cout << setw(4) << piece_count;
    cout << "       ";
    cout << fixed << setprecision (2) << setw(9) << piece_pay;
    cout << endl;
    cout << "====================================\n";
    cout << "TOTAL          ";
    cout << setw(4);
    cout << manager_count + hourly_count + commission_count + piece_count;
    cout << "       ";
    cout << fixed << setprecision (2) << setw(9);
    cout << manager_pay + hourly_pay + commission_pay + piece_pay;
    cout << endl;


    return 0;
}
