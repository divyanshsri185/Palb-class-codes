#include<iostream>
using namespace std;

// Function to check if a matrix is Toeplitz
bool isToeplitz(int matrix[][100], int rows, int cols) {
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
void printMatrix(int matrix[][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    int matrix[100][100];
    
    cout << "===== TOEPLITZ MATRIX CHECKER =====" << endl << endl;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    cout << "\nEnter the matrix elements:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nYour Matrix:" << endl;
    printMatrix(matrix, rows, cols);
    
    cout << "\nIs this matrix Toeplitz? " << (isToeplitz(matrix, rows, cols) ? "YES" : "NO") << endl;
    
    if(isToeplitz(matrix, rows, cols)) {
        cout << "Each descending diagonal has the same elements!" << endl;
    } else {
        cout << "This matrix is NOT Toeplitz." << endl;
    }
    
    return 0;
}
