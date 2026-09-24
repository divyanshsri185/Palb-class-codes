#include<iostream>
using namespace std;

int main() {
    // Simple Toeplitz matrix (3x3)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 1, 2},
        {5, 4, 1}
    };
    
    // Print the matrix
    cout << "Matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // Check if Toeplitz
    cout << "\nChecking Toeplitz property..." << endl;
    bool isToeplitz = true;
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(matrix[i][j] != matrix[i+1][j+1]) {
                isToeplitz = false;
            }
        }
    }
    
    if(isToeplitz) {
        cout << "YES - This is a Toeplitz matrix!" << endl;
    } else {
        cout << "NO - This is NOT a Toeplitz matrix!" << endl;
    }
    
    return 0;
}