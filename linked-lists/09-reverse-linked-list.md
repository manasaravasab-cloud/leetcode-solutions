## Problem: Reverse Linked List (Easy - Bonus)
**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
An iterative three-pointer traversal tracks `prev`, `curr`, and `nextTemp`. At each iteration, the current node's `next` pointer is flipped backwards to reference `prev`, and pointers are stepped forward until reaching the list's termination.

### Complexity
- Time: $O(n)$ — visits each node in the singly linked list once.
- Space: $O(1)$ — mutates pointer references in place without extra heap allocation.

### Notes
Boundary cases involving an empty list (`head == nullptr`) or a single node list run cleanly without special branching.
