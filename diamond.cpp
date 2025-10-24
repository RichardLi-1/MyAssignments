//
// Created by Richard Li on 2025-10-19.
//

#include <iostream>
using namespace std;

int main() {
    int width;
    cin >> width;

    if (width%2==0 || width<=0 || width>=20) {
        return 1;
    }

    for (int i=0;i<width;i++) {
        for (int j=0-(width/2);j<width/2 + 1;j++) {

            //Necessary logic for the second half of the diamond
            int ii = i;
            if (i>width/2) {
                ii = width - i - 1;
            }

            if ((width/2+1)-ii <= (width/2+1) + j && (width/2+1)+ii >= (width/2+1) + j) {
                cout << "*";
            }

            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}