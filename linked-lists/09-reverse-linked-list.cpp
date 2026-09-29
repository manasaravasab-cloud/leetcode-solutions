#include <iostream>
#include <vector>
#include <cassert>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Multi-node list 1 -> 2 -> 3
    ListNode* node3 = new ListNode(3);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* node1 = new ListNode(1, node2);
    ListNode* reversed = sol.reverseList(node1);
    assert(reversed->val == 3 && reversed->next->val == 2 && reversed->next->next->val == 1);

    // Test Case 2: Edge case (empty list)
    assert(sol.reverseList(nullptr) == nullptr);

    std::cout << "[09-reverse-linked-list] All local tests passed!" << std::endl;
    return 0;
}