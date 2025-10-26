//
// Created by Richard Li on 2025-10-24.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void enter_data(double &a, double &b, double &c);
void quadratic(double a, double b, double c,
               double &first_real, double &first_imag,
               double &second_real, double &second_imag);
void display_results(double first_real, double first_imag,
                     double second_real, double second_imag);


void enter_data(double &a, double &b, double &c) {
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "  a = " << a << endl << endl;

    cout << "Enter the value for b: ";
    cin >> b;
    cout << "  b = " << b << endl << endl;

    cout << "Enter the value for c: ";
    cin >> c;
    cout << "  c = " << c << endl << endl;
}


void quadratic(double a, double b, double c, double &first_real, double &first_imag, double &second_real, double &second_imag) {
    double discriminant = b*b - 4*a*c;

    if (discriminant >= 0) {
        first_real = ((0-b) + sqrt(discriminant))/(2*a);
        second_real = ((0-b) - sqrt(discriminant))/(2*a);
    }
    else {
        first_real = -b/(2*a);
        second_real = -b/(2*a);
        first_imag = sqrt(abs(discriminant))/(2*a);
        second_imag = 0 - sqrt(abs(discriminant))/(2*a);
    }
}


void display_results(double first_real, double first_imag, double second_real, double second_imag) {

    if (first_imag == 0) {
        cout << "The roots of the equation are " << first_real << " and " << second_real << "." << endl << endl;
    }
    else {
        cout.setf(ios::showpos);
        cout << setprecision(4) << fixed << "The roots of the equation are " << first_real << first_imag
        << "j and " << second_real << second_imag << "j." << endl
        << endl;
    }



}



int main() {
    double a = 0.0, b = 0.0, c = 0.0;
    double first_real = 0.0, second_imag = 0.0, second_real = 0.0, first_imag = 0.0;
    enter_data(a, b, c);
    quadratic(a, b, c, first_real, first_imag, second_real, second_imag);
    display_results(first_real, first_imag, second_real, second_imag);
}
