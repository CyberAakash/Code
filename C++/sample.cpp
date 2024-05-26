#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 2, 3};

    do {
        for (int num : nums) {
            std::cout << num << ' ';
        }
        std::cout << std::endl;
    } while (std::next_permutation(nums.begin(), nums.end()));

    return 0;
}
