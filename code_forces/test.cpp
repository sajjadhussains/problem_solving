#include <iostream>
#include <cstring>

int main() {
    int y;
    std::cin >> y;

    // Loop until a year with distinct digits is found
    while (true) {
        y++; // Increment the year
        int year = y;
        int digitCount[10]; // Array to store occurrences of each digit
        std::memset(digitCount, 0, sizeof(digitCount));

        // Extract and check each digit
        while (year > 0) {
            int digit = year % 10;
            if (digitCount[digit] > 0) {
                break; // Found a repeated digit, break the loop
            }
            digitCount[digit]++;
            year /= 10;
        }

        // If all digits are distinct, print the result and break the loop
        if (year == 0) {
            std::cout << y << std::endl;
            break;
        }
    }

    return 0;
}
