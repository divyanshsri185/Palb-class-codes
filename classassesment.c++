//write a program to find third maximum in two numbers//
#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int main() {
    int n;
    
   
    cout << "Enter how many numbers you want: ";
    cin >> n;
    

    if (n < 3) {
        cout << "Sorry! We need at least 3 numbers." << endl;
        return 0;
    }
    
  
    vector<int> arr(n);
    

    cout << "Enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> arr[i];
    }

    long long first = numeric_limits<long long>::min();
    long long second = numeric_limits<long long>::min();
    long long third = numeric_limits<long long>::min();

    for (int number : arr) {
        if (number == first || number == second || number == third) {
            continue;
        }

        if (number > first) {
            third = second;
            second = first;
            first = number;
        } else if (number > second) {
            third = second;
            second = number;
        } else if (number > third) {
            third = number;
        }
    }

    if (third == numeric_limits<long long>::min()) {
        cout << "There are not enough distinct numbers to find a third maximum." << endl;
    } else {
        cout << "The third maximum number is: " << third << endl;
    }

    return 0;
}