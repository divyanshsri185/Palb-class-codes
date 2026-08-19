#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int temp = a;
    a = c;
    c = temp;

    cout << "After swapping first and third: " << a << " " << b << " " << c << ".\n";
    return 0;
}

