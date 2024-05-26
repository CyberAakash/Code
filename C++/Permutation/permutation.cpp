#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> nums = {1, 2, 3};

    do {
        for (int num : nums) {
            cout << num << ' ';
        }
        cout << endl;
    } while (std::next_permutation(nums.begin(), nums.end()));

    return 0;
}
