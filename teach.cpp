//
// Created by Richard Li on 2025-10-07.
//

#include <iostream>
using namespace std;

int main() {
    bool continuing = true;
    int input = 0;
    int total_correct_first_try = 0;
    int total_questions = 0;
    bool correct = false;
    bool firstTry = true;

    do {
        int x = rand()%10, y = rand()%10;
        correct = false;
        firstTry = true;
        cout << "\nHow much is " << x << " times " << y << "? (Enter -1 to end) ";
        cin >> input;
        total_questions++;
        while (!correct) {
            if (input==-1) {
                continuing = false;
                correct = true;
                total_questions--;
            }
            else if (input==x*y) {
                    cout << "\nVery good!\n\n";
                    if (firstTry) {
                        total_correct_first_try++;
                    }

                    correct = true;
                }
            else {
                    cout << "No. Please try again. " << endl;
                    cin >> input;
                    if (firstTry) {
                        firstTry = false;
                    }
            }

        }
    } while (continuing);
    cout << "\nCorrectly answered " << total_correct_first_try << " of "<< total_questions << " on the first try.\n";
}