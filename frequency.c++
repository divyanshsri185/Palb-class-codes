#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    }

   
    for (auto it : freq) {
        cout << it.first << " = " << it.second << endl;
    }

    return 0;
}