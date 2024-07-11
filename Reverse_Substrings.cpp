// Reverse Substrings Between Each Pair of Parentheses
// You are given a string s that consists of lower case English letters and brackets.

// Reverse the strings in each pair of matching parentheses, starting from the innermost one.
// Your result should not contain any brackets. 

// Example 1:
// Input: s = "(abcd)"
// Output: "dcba"

// Example 2:
// Input: s = "(u(love)i)"
// Output: "iloveu"
// Explanation: The substring "love" is reversed first, then the whole string is reversed.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> open_paren;
        int i = 0;
        
        while (i < s.size()) {
            if (s[i] == '(') {
                open_paren.push_back(i);
            } else if (s[i] == ')') {
                int start = open_paren.back();
                reverse(s.begin() + start + 1, s.begin() + i);
                open_paren.pop_back();
            }
            i++;
        }
        
        string result;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '(' && s[i] != ')') {
                result.push_back(s[i]);
            }
        }
        return result;
    }
};

int main() {
    string str = "(u(love)i)";
    Solution Obj1;
    cout << "Before Calling the Function" << endl;
    cout << str << endl;
    str = Obj1.reverseParentheses(str);
    cout << "After Calling the Function" << endl;
    cout << str << endl;
    return 0;
}
