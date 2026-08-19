#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int evenSum = 1, oddSum = 1;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            arr
        } else {
            oddSum = oddSum + arr[i];
        }
    }

    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}