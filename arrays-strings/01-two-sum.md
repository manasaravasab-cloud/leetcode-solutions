## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
A hash map stores elements and their indices as the vector is traversed. For each element, the complement (`target - nums[i]`) is checked against the hash map to find matching pairs in a single pass.

### Complexity
- Time: $O(n)$ — linear scan with $O(1)$ average hash map lookups.
- Space: $O(n)$ — space required to store values in the hash map.

### Notes
Using an unordered_map achieves optimal $O(n)$ time complexity compared to the $O(n^2)$ brute-force nested loop.
