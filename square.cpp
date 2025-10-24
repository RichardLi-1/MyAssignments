//
// Created by Richard Li on 2025-10-07.
//

#include <iostream>
using namespace std;


int main() {
    int length = 0;
    cin >> length;

    if (length%2==0 && length>=2 && length<=20) {
        bool topOrBottom = true;

        int i = 0;
        int ii = 0;

        while (i < length) {
            if (i==(length-1)) {
                topOrBottom = true;
            }
            while (ii < length) {
                if (topOrBottom) {
                    cout << "*";
                    ii++;
                }
                else {
                    if (ii==0 || ii==length-1) {
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }

                    ii++;
                }
            }

            cout << endl;
            if (i==0) {
                topOrBottom = false;
            }
            i++;

            ii = 0;
        }

        return 0;
    }
    else {
        return 1;
    }


}