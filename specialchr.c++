#include <iostream>



using namespace std;
|||||||
int main() {
    string str = "h@#4el*l;&o";
    string letters = "";
    string special = "";

    for (int i = 0; i < str.length(); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letters += str[i];
        } else {
            special += str[i];
        }
    }

    cout << "Letters: " << letters << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}