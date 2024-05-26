#include <iostream>
#include <limits>

using namespace std;

int customAtoi(const string& str) {
    int result = 0;
    int sign = 1; // Initialize the sign as positive

    // Skip leading white spaces
    size_t i = 0;
    while (i < str.size() && (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r' ))) {
        i++;
    }

    // Check for an optional sign
    if (i < str.size() && (str[i] == '+' || str[i] == '-')) {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    // Convert digits to integer, while checking for overflow
    while (i < str.size() && str[i] >= '0' && str[i] <= '9') {
        int digit = str[i] - '0';

        // Check for integer overflow
        if (result > numeric_limits<int>::max() / 10 || 
            (result == numeric_limits<int>::max() / 10 && digit > 7)) {
            return (sign == 1) ? numeric_limits<int>::max() : numeric_limits<int>::min();
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}

int main() {
    string str;
    cin >> str;
    // string str = "-91283472332";
    int num = customAtoi(str);
    cout << "Converted integer: " << num << endl;

    return 0;
}
