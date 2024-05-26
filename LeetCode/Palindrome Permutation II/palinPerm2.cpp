// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// vector<string> generatePalindromes(string s) {
//     unordered_map<char, int> char_count;

//     for (char c : s) {
//         char_count[c]++;
//     }

//     char odd_char = '\0';
//     string half;
//     for (const auto& entry : char_count) {
//         if (entry.second % 2 != 0) {
//             if (odd_char != '\0') {
//                 return {};
//             }
//             odd_char = entry.first;
//         }
//         half += string(entry.second / 2, entry.first);
//     }

//     vector<string> result;
//     string path;
//     vector<bool> used(half.size(), false);

//     // Helper function to generate permutations using backtracking
//     function<void()> backtrack = [&]() {
//         if (path.size() == half.size()) {
//             string palindrome = path;
//             if (odd_char != '\0') {
//                 palindrome += odd_char;
//             }
//             palindrome += string(path.rbegin(), path.rend());
//             result.push_back(palindrome);
//             return;
//         }

//         for (int i = 0; i < half.size(); i++) {
//             if (used[i] || (i > 0 && half[i] == half[i - 1] && !used[i - 1])) {
//                 continue;
//             }
//             used[i] = true;
//             path.push_back(half[i]);
//             backtrack();
//             used[i] = false;
//             path.pop_back();
//         }
//     };

//     backtrack();
//     return result;
// }

// int main() {
//     string str = "aabb";
//     vector<string> palindromes = generatePalindromes(str);

//     if (palindromes.empty()) {
//         cout << "No palindromic permutations could be formed." << endl;
//     } else {
//         cout << "Palindromic permutations: ";
//         for (const string& palindrome : palindromes) {
//             cout << palindrome << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
