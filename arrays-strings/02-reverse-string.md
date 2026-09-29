## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Two pointers at opposite ends (`left = 0`, `right = s.size() - 1`) swap characters in place, incrementing and decrementing until they meet in the middle.

### Complexity
- Time: $O(n)$ — performs $n / 2$ element swaps.
- Space: $O(1)$ — mutates the vector in place without allocating extra memory.

### Notes
Meets the strict constraint of in-place mutation without allocating auxiliary buffer arrays.
