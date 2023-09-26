#include <iostream>
#include <string>

using namespace std;

string countAndSay(int n) {
    if (n <= 0) {
        return "";
    }

    string result = "1"; // Initialize with the base case

    for (int i = 2; i <= n; i++) {
        string newResult = "";
        char currentChar = result[0];
        int count = 1;

        for (int j = 1; j < result.length(); j++) {
            if (result[j] == currentChar) {
                count++;
            } else {
                newResult += to_string(count) + currentChar;
                currentChar = result[j];
                count = 1;
            }
        }

        // Add the last count and character
        newResult += to_string(count) + currentChar;

        result = newResult; // Update the result for the next iteration
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    string result = countAndSay(n);
    cout << "The " << n << "th term of the count-and-say sequence is: " << result << endl;

    return 0;
}
