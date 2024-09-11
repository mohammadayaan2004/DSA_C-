/*
Leetcode Q125. Valid Palindrome

https://leetcode.com/problems/valid-palindrome/

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/
#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
bool isPalindrome(string s)
{
    string str;
    for(char character:s)
    {
        if(isalnum(character))
        {
            str+=tolower(character);
        }
    }
    string rever=str;
    reverse(rever.begin(),rever.end());

    if(str==rever)
    {
        return true;
    }
    else return false;
}
};

int main()
{
    string n;
    cout << "Enter a number:-";
    cin >> n;
    Solution s;
    cout << s.isPalindrome(n);
return 0;
}