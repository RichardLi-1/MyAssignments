//
// Created by Richard Li on 2025-10-24.
//


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


void enter_sides(double &a, double &b, double &c) {
    //cout << "Enter the first side of the triangle: ";
    cin >> a >> b >> c;
}

bool check_sides(double a, double b, double c) {
    if (a < 0 && b < 0 && c < 0 || c>=a+b || a>=b+c || b>=c+a) {
        return false;
    }

    return true;
}

double calculate_angle(double a, double b, double c) {
    return acos((0 - c*c + b*b + a*a)/(2*a*b)) * 180.0 / M_PI;
}

int main() {
    double a, b, c, theta;

    enter_sides(a, b, c);

    if (check_sides(a, b, c)) {
        cout << setprecision(2) << fixed << calculate_angle(a, b, c) << endl;
    }
    else {
        return 1;
    }
    return 0;
}