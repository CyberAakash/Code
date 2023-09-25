#include <iostream>
#include <unordered_map>

using namespace std;


// Function to convert a Roman numeral to an integer
int romanToInt(string s) {
    unordered_map<char, int> romanValues = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && romanValues[s[i]] < romanValues[s[i + 1]]) {
            result -= romanValues[s[i]];
        } else {
            result += romanValues[s[i]];
        }
    }

    return result;
}



// Function to convert a Roman numeral to an integer
// int romanToInt(string s) {

//     char roman[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
//     int values[] = {1, 5, 10, 50, 100, 500, 1000};

//     int result = 0;
//     int len = sizeof(values)/sizeof(values[0]);

//     for (int i = 0; i < s.length(); i++) {
//         int a = -1, b = -1;
//         for(int j = 0; j < len  && a == -1 || b == -1; j++) {
//             if(s[i] == roman[j]) {
//                 a = j;
//             }
//             if(s[i+1] == roman[j]) {
//                 b = j;
//             }
//         }
//         if (i < s.length() - 1 && values[a] < values[b]) {
//             result -= values[a];
//         } else {
//             result += values[a];
//         }
//     }

//     return result;
// }

int main() {
    string romanNumeral;
    cout << "Enter a Roman numeral: ";
    cin >> romanNumeral;

    int result = romanToInt(romanNumeral);
    if (result != -1) {
        cout << "The integer value of " << romanNumeral << " is: " << result << endl;
    } else {
        cout << "Invalid Roman numeral." << endl;
    }

    return 0;
}
