#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Number of heights cannot be negative." << endl;
        return 1;
    }

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    vector<int> expected = heights;
    sort(expected.begin(), expected.end());

    int mismatches = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] != expected[i]) {
            mismatches++;
        }
    }

    cout << mismatches << endl;
    return 0;
}