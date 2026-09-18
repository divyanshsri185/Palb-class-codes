#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool buddyStrings(string s, string goal) {
    if (s.length() != goal.length()) {
        return false;
    }

    if (s == goal) {
        vector<int> freq(26, 0);
        for (char ch : s) {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] > 1) {
                return true;
            }
        }
        return false;
    }

    int first = -1, second = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != goal[i]) {
            if (first == -1)
                first = i;
            else if (second == -1)
                second = i;
            else
                return false;
        }
    }

    return (second != -1 && s[first] == goal[second] && s[second] == goal[first]);
}

int main() {
    string str1 = "ab";
    string str2 = "ba";

    if (buddyStrings(str1, str2)) {
        cout << "Buddy Strings" << endl;
    } else {
        cout << "Not Buddy Strings" << endl;
    }

    return 0;
}
