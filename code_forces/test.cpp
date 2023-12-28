#include <iostream>

int main() {
    // Input number
    int number = 78;

    // Calculate the 2nd digit
    int secondDigit = (number % 100) / 10;

    // Display the result
    std::cout << "The 2nd digit of " << number << " is: " << secondDigit << std::endl;

    return 0;
}
