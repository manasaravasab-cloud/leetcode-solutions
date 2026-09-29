#include <iostream>
#include <vector>
#include <cassert>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int left = 0;
        int right = static_cast<int>(s.size()) - 1;
        while (left < right) {
            std::swap(s[left++], s[right--]);
        }
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical case (odd length)
    std::vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    sol.reverseString(s1);
    assert((s1 == std::vector<char>{'o', 'l', 'l', 'e', 'h'}));

    // Test Case 2: Edge case (single element)
    std::vector<char> s2 = {'a'};
    sol.reverseString(s2);
    assert((s2 == std::vector<char>{'a'}));

    std::cout << "[02-reverse-string] All local tests passed!" << std::endl;
    return 0;
}