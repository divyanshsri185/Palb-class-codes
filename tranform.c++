#include <iostream>

using namespace std;

int main() {
    int a[4][4];

    cout << "Enter 16 numbers:\n";


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            swap(a[i][j], a[j][i]);
        }
    }

    cout << "Transposed matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}