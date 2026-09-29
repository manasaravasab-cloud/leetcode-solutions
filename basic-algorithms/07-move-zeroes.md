## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
A two-pointer insertion approach scans the vector and writes non-zero values sequentially into the `insertPos` index. A trailing loop then overwrites all remaining indices up to the vector length with zeroes.

### Complexity
- Time: $O(n)$ — linear pass to place non-zero elements plus a trailing pass to fill trailing zeroes.
- Space: $O(1)$ — operates in-place without auxiliary memory.

### Notes
Arrays with only zeroes or zero non-zero elements terminate cleanly without index out-of-bounds errors.
