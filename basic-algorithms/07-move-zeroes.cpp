#include <iostream>
#include <vector>
#include <cassert>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int insertPos = 0;
        for (int num : nums) {
            if (num != 0) {
                nums[insertPos++] = num;
            }
        }
        while (insertPos < static_cast<int>(nums.size())) {
            nums[insertPos++] = 0;
        }
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical case with scattered zeroes
    std::vector<int> n1 = {0, 1, 0, 3, 12};
    sol.moveZeroes(n1);
    assert((n1 == std::vector<int>{1, 3, 12, 0, 0}));

    // Test Case 2: Edge case (all zeroes)
    std::vector<int> n2 = {0, 0};
    sol.moveZeroes(n2);
    assert((n2 == std::vector<int>{0, 0}));

    std::cout << "[07-move-zeroes] All local tests passed!" << std::endl;
    return 0;
}