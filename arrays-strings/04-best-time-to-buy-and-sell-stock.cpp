#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = 1e9;
        int maxProfit = 0;
        for (int price : prices) {
            minPrice = std::min(minPrice, price);
            maxProfit = std::max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical case with profits
    std::vector<int> p1 = {7, 1, 5, 3, 6, 4};
    assert(sol.maxProfit(p1) == 5);

    // Test Case 2: Edge case (strictly decreasing prices -> zero profit)
    std::vector<int> p2 = {7, 6, 4, 3, 1};
    assert(sol.maxProfit(p2) == 0);

    std::cout << "[04-stock] All local tests passed!" << std::endl;
    return 0;
}