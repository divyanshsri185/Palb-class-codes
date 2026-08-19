#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int min = arr[0];
    int store = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
        int profit = arr[i] - min;
        if(profit > store)
            store = profit;
    }
    
    cout << "Max profit: " << store << endl;
    
    return 0;
}


