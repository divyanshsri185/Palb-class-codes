#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    if (s.size() >= 2) {
        std::string firstTwo = s.substr(0, 2);
        std::cout << "First two characters: " << firstTwo << "\n";

    }

    return 0;
}

