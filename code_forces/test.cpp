#include <iostream>
#include <vector>

int main() {
    std::vector<char> elements;

    char userInput;
    do {
        std::cout << "Enter an element (or 'q' to quit): ";
        std::cin >> userInput;

        if (userInput != 'q') {
            elements.push_back(userInput);
        }
    } while (userInput != 'q');

    // Print the entered elements
    std::cout << "Entered Elements: ";
    for (char element : elements) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;

    return 0;
}
