//
// Created by Richard Li on 2025-09-27.
//

#include <iostream>
using namespace std;

int main() {
    int seconds;
    int minutes = 0;
    int hours = 0;
    int days = 0;
    int weeks = 0;

    cin >> seconds;

    if (!(seconds>0)){
        return 1;
    }

    minutes = seconds/60;
    seconds %= 60;

    hours = minutes/60;
    minutes %= 60;

    days = hours/24;
    hours %= 24;

    weeks = days/7;
    days %= 7;


    cout << weeks << " weeks, \n"
<< days << " days, \n"
<< hours << " hours, \n"
<< minutes << " minutes and \n"
<< seconds << " seconds.\n";
}
