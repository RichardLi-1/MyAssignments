//
// Created by Richard Li on 2025-10-06.
//

#include <iostream>
using namespace std;

int main() {

    int input;
    cin >> input;

    if (input<0) {
        return 1;
    }
    int inputNumber = input;
    unsigned int result = inputNumber;


    if (input<=1) {
        result = 1;
    }
    else {
        do {
            inputNumber -= 1;
            result = result * inputNumber;
        } while (inputNumber != 1);
    }


    cout << "The factorial of " << input << " is " << result << "." << endl;
}