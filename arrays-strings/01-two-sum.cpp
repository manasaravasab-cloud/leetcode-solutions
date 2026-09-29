#include <iostream>
#include <vector>
#include <unordered_map>
#include <cassert>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;
        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical case
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> res1 = sol.twoSum(nums1, target1);
    assert((res1 == std::vector<int>{0, 1}));

    // Test Case 2: Edge case (Duplicate values making up the target)
    std::vector<int> nums2 = {3, 3};
    int target2 = 6;
    std::vector<int> res2 = sol.twoSum(nums2, target2);
    assert((res2 == std::vector<int>{0, 1}));

    std::cout << "[01-two-sum] All local tests passed!" << std::endl;
    return 0;
}