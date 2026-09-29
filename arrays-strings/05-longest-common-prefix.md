## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Horizontal scanning initializes the prefix with the first string. For each subsequent string, the prefix is shortened by one trailing character until it matches the start of the current word (`find(prefix) == 0`).

### Complexity
- Time: $O(S)$ — where $S$ is the sum of characters across all strings.
- Space: $O(1)$ — modifies and stores only the prefix substring in place.

### Notes
If the prefix is reduced to an empty string at any point, the function terminates early, avoiding redundant iterations over remaining words.
