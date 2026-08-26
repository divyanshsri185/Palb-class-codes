#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int sum = 0;

    cout << "Enter 16 numbers:\n";


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i <= j) {
                sum = sum + a[i][j];
            }
        }
    }

    cout << "Sum of upper triangular matrix = " << sum;

    return 0;
}