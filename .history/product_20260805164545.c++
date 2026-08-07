#include <iostream>
using namespace std;


int main() {
    int arr[5];

 
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Find the product of all elements.
    long long product = 1;
    for (int i = 0; i < 5; i++) {
        product *= arr[i];
    }

    cout << product;
    return 0;
}
