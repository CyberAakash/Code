#include <iostream>
#include <unordered_map>

using namespace std;

bool canPermutePalindrome(string s) {
    unordered_map<char, int> char_count;

    for (char c : s) {
        char_count[c]++;
    }

    int odd_count = 0;
    for (const auto& entry : char_count) {
        if (entry.second % 2 != 0) {
            odd_count++;
        }
    }

    return odd_count <= 1;
}

int main() {
    string str = "carerac";
    if (canPermutePalindrome(str)) {
        cout << "The string can be permuted to form a palindrome." << endl;
    } else {
        cout << "The string cannot be permuted to form a palindrome." << endl;
    }

    return 0;
}
