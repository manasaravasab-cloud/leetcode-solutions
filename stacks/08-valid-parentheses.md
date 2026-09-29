## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
A stack data structure matches opening brackets with their closing counterparts. As opening brackets are scanned, their matching closing symbols are pushed onto the stack. When a closing bracket appears, it is compared against the top element and popped.

### Complexity
- Time: $O(n)$ — single pass over the string of length $n$.
- Space: $O(n)$ — stack can store up to $n$ characters in the worst case.

### Notes
Checking `st.empty()` before calling `st.top()` prevents runtime exceptions on leading closing characters like `"]"`.
