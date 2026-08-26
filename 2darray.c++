#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int diagonalSum = 0;

    for (int i = 0; i < 4; i++) {
        diagonalSum += arr[i][i];
        if 
    cout << "Diagonal sum = " << diagonalSum << endl;
    return 0;
}