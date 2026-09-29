## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
A single-pass greedy technique maintains the lowest buying price encountered so far. On each day, the potential profit (`current_price - min_price`) is calculated and compared against the maximum profit recorded.

### Complexity
- Time: $O(n)$ — linear scan over the vector of prices.
- Space: $O(1)$ — constant space using two tracking variables.

### Notes
If prices decrease every day, profit remains 0 as initialized, correctly identifying that no profitable transaction is possible.
