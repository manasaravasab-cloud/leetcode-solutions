#include <iostream>
#include <vector>
#include <string>
#include <cassert>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";
        std::string prefix = strs[0];
        for (size_t i = 1; i < strs.size(); ++i) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Typical matching prefix
    std::vector<std::string> s1 = {"flower", "flow", "flight"};
    assert(sol.longestCommonPrefix(s1) == "fl");

    // Test Case 2: Edge case (no common prefix)
    std::vector<std::string> s2 = {"dog", "racecar", "car"};
    assert(sol.longestCommonPrefix(s2) == "");

    std::cout << "[05-longest-common-prefix] All local tests passed!" << std::endl;
    return 0;
}