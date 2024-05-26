#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define arrays to store Roman numeral symbols and their corresponding values
string romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

// Function to convert an integer to a Roman numeral
string intToRoman(int num) {
    if (num <= 0 || num >= 4000) {
        return "Invalid input. Please enter a number between 1 and 3999.";
    }

    string roman = "";
    int len = sizeof(romanNumerals)/sizeof(romanNumerals[0]);
    for (int i = 0; i < len; i++) {
        while (num >= values[i]) {
            roman += romanNumerals[i];
            num -= values[i];
        }
    }

    return roman;
}

int main() {
    int num;
    cout << "Enter an integer between 1 and 3999: ";
    cin >> num;

    string romanNumeral = intToRoman(num);

    cout << "Roman numeral representation of " << num << " is: " << romanNumeral << endl;

    return 0;
}
