## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
A fixed-size frequency array of length 26 tracks character balances. The count increments for characters in the first string and decrements for the second. Any non-zero count signifies mismatched character counts.

### Complexity
- Time: $O(n)$ — linear pass across both strings.
- Space: $O(1)$ — constant storage array for the 26 lowercase English letters.

### Notes
Terminates immediately if the lengths of the two strings differ.
