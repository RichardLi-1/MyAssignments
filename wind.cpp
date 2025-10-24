//
// Created by Richard Li on 2025-09-30.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double celsius;
    double windSpeedkph;



    double windChill;

    if (!(cin >> celsius >> windSpeedkph)) {
        return 1;
    }

    if (!windSpeedkph>0) {
        return 1;
    }

    double fahrenheit = (celsius * 1.8) + 32;
    double windSpeedmph = windSpeedkph*0.6215;

    if (windSpeedmph<=4.0) {
        windChill = fahrenheit;

    }
    else if (windSpeedmph <= 45.0) {
        windChill = 91.4 - (10.45 + 6.69*sqrt(windSpeedmph) - 0.447*windSpeedmph)*((91.4-fahrenheit)/22.0);
    }
    else {
        windChill = 1.6*fahrenheit - 55.0;
    }

    windChill = (windChill-32)/1.8;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "The wind chill index is " << windChill << ". Brrrr!" << endl;

}