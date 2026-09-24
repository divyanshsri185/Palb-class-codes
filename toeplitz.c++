#include<iostream>
using namespace std;

// Function to check if a matrix is Toeplitz
bool isToeplitz(int matrix[][3], int rows, int cols) {
    // Check all diagonals
    // For a Toeplitz matrix: matrix[i][j] == matrix[i+1][j+1]
    for(int i = 0; i < rows - 1; i++) {
        for(int j = 0; j < cols - 1; j++) {
            if(matrix[i][j] != matrix[i+1][j+1]) {
                return false;
            }
        }
    }
    return true;
}

// Function to print a matrix
void printMatrix(int matrix[][3], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example 1: Toeplitz matrix
    int toeplitzMatrix[3][3] = {
        {1, 2, 3},
        {4, 1, 2},
        {5, 4, 1}
    };
    
    cout << "Matrix 1:" << endl;
    printMatrix(toeplitzMatrix, 3, 3);
    cout << "Is Toeplitz? " << (isToeplitz(toeplitzMatrix, 3, 3) ? "Yes" : "No") << endl << endl;
    
    // Example 2: Non-Toeplitz matrix
    int nonToeplitzMatrix[3][3] = {
        {1, 2, 3},
        {4, 5, 2},
        {5, 4, 1}
    };
    
    cout << "Matrix 2:" << endl;
    printMatrix(nonToeplitzMatrix, 3, 3);
    cout << "Is Toeplitz? " << (isToeplitz(nonToeplitzMatrix, 3, 3) ? "Yes" : "No") << endl;
    
    return 0;
}
