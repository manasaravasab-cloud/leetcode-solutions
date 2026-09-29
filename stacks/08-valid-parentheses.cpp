#include <iostream>
#include <string>
#include <stack>
#include <cassert>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        for (char c : s) {
            if (c == '(') st.push(')');
            else if (c == '{') st.push('}');
            else if (c == '[') st.push(']');
            else {
                if (st.empty() || st.top() != c) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical nested valid sequence
    assert(sol.isValid("()[]{}") == true);
    assert(sol.isValid("{[()]}") == true);

    // Test Case 2: Edge case (unmatched closing bracket / odd length)
    assert(sol.isValid("]") == false);
    assert(sol.isValid("((") == false);

    std::cout << "[08-valid-parentheses] All local tests passed!" << std::endl;
    return 0;
}