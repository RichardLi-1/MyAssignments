//
// Created by Richard Li on 2025-10-21.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {

    double pi = 4.0;
    double divisor = 3.0;
    double tolerance = 0.00;

    while (true) {
        cout << "Enter desired tolerance between 0.0 and 0.1: ";
        cin >> tolerance;
        if (tolerance < 0.1 && tolerance > 0.00) {
            break;
        }
    }

    int count = 0;

    bool breakNext = false;
    while (true) {
        cout << count << "\t\t" << fixed << setprecision (12) << pi << '\n';

        double oldPi = pi;

        if (count % 2 == 0) {
            pi -= (4/divisor);
        }
        else {
            pi += (4/divisor);
        }
        divisor += 2;

        if (breakNext) {
            break;
        }

        if (fabs(oldPi - pi) < tolerance) {
            breakNext = true;
        }


        count++;


    }
    return 0;

}