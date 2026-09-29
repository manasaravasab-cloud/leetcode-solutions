#include <iostream>
#include <vector>
#include <cassert>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int low = 0;
        int high = static_cast<int>(nums.size()) - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical found case
    std::vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    assert(sol.search(nums1, 9) == 4);

    // Test Case 2: Edge case (single element not matching)
    std::vector<int> nums2 = {5};
    assert(sol.search(nums2, -5) == -1);

    std::cout << "[06-binary-search] All local tests passed!" << std::endl;
    return 0;
}