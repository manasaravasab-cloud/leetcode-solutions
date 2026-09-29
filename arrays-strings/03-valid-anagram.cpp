#include <iostream>
#include <string>
#include <vector>
#include <cassert>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) return false;
        std::vector<int> count(26, 0);
        for (char c : s) count[c - 'a']++;
        for (char c : t) {
            if (--count[c - 'a'] < 0) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical valid anagram
    assert(sol.isAnagram("anagram", "nagaram") == true);

    // Test Case 2: Edge case (mismatched lengths)
    assert(sol.isAnagram("rat", "car") == false);
    assert(sol.isAnagram("a", "ab") == false);

    std::cout << "[03-valid-anagram] All local tests passed!" << std::endl;
    return 0;
}