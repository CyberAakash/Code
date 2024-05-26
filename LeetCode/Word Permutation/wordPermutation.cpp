#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void permute(string &word, int start, int end, vector<string> &permutations) {
    if (start == end) {
        permutations.push_back(word);
    } else {
        for (int i = start; i <= end; i++) {
            swap(word[start], word[i]);
            permute(word, start + 1, end, permutations);
            swap(word[start], word[i]); // backtrack
        }
    }
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int length = word.length();

    vector<string> permutations;
    permute(word, 0, length - 1, permutations);

    sort(permutations.begin(), permutations.end());

    cout << "Sorted Permutations:" << endl;
    for (int i = 0; i < permutations.size(); i++) {
        cout << permutations[i] << endl;
        if (permutations[i] == word) {
            cout << "Index: " << i << endl;
        }
    }

    return 0;
}
