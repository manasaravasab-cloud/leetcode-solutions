## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Standard binary search over a sorted vector. It iteratively computes the midpoint using `mid = low + (high - low) / 2` and halves the search space based on comparisons against the target value.

### Complexity
- Time: $O(\log n)$ — divides the search interval in half with each step.
- Space: $O(1)$ — constant auxiliary memory.

### Notes
Using `low + (high - low) / 2` instead of `(low + high) / 2` prevents signed integer overflow for large index boundaries.
