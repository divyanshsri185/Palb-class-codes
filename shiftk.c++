#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {}; 
    int count = 0;
    int k = 1;          

    for (int i = 0; i < 4; i++) {
        count += k;

        int newRow = count / 4;
        int newCol = count % 4; 

        if (newRow < 4) {
            arr[newRow][newCol] = count;
        }
    }

    return 0;
}