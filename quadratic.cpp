//
// Created by Richard Li on 2025-10-24.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void enter_data(double &a, double &b, double &c) {
    cout << "Enter the value for a: ";
    cin >> a;
    cout << " a = " << a << endl << endl;

    cout << "Enter the value for b: ";
    cin >> b;
    cout << " b = " << b << endl << endl;

    cout << "Enter the value for c: ";
    cin >> c;
    cout << " c = " << c << endl << endl;
}


void quadratic(double a, double b, double c, double &first_real, double &first_imag, double &second_real, double &second_imag) {
    double discriminant = b*b - 4*a*c;

    if (discriminant >= 0) {
        first_real = ((0-b) + sqrt(discriminant))/(2*a);
        second_real = ((0-b) - sqrt(discriminant))/(2*a);
    }
    else {
        first_imag = ((0/b) + sqrt(discriminant))/(2*a);
        second_imag = ((0/b) - sqrt(discriminant))/(2*a);
    }

}


void display_results(double first_real, double first_imag, double second_real, double second_imag) {

    if (first_imag == 0) {
        cout << "The roots of the equation are " << first_real << " and " << second_real << "." << endl << endl;
    }
    else {
        cout.setf(ios::showpos);
        cout << "The roots of the equation are " << first_real << first_imag
        << "j and " << second_real << second_imag << "j." << endl
        << endl;
    }



}



int main() {
    double a, b, c;
    double first_real = 0.0, second_imag = 0.0, second_real = 0.0, first_imag = 0.0;
    enter_data(a, b, c);
    display_results(a, b, c, a);
}
