#include<iostream>
using namespace std;
int main() {
    string str;
    getline(cin, str);

    for (char ch : str) {
        if (ch >= 'A' && ch <= 'Z') {
            cout << ch << " is a capital letter" << endl;
        }
    }

    return 0;
}