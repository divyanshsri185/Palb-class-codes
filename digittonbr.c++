#include <iostream>
using namespace std;

int main() {
    int arr[4] = {6211, 7579, 94120, 8599};

    for (int i = 0; i < 4; i++) {
        int number = arr[i];
        int count = 0;

        while (number > 0) {
            number /= 10;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}