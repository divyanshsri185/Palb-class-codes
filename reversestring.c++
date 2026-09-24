#include <iostream>
using namespace std;

int main() {
    string str = "h@#el*l&o";
    string reversed = "";

    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    cout << "Original: " << str << endl;
    cout << "Reversed: " << reversed << endl;

    return 0;
}
