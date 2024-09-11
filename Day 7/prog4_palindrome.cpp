/*https://leetcode.com/problems/palindrome-number/
leetcode Q9
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


Constraints:

-231 <= x <= 231 - 1


Follow up: Could you solve it without converting the integer to a string?

*/
/*
Leetcode Q
*/
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int num)
    {
        int lastdigit, reverse = 0, duplicate = num;
        while (num > 0)
        {
            lastdigit = num % 10;
            reverse = reverse * 10 + lastdigit;
            num /= 10;
        }
        if (reverse == duplicate)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
    int main()
    {
        int n;
        cout << "Enter a number:-";
        cin >> n;
        Solution s;
        cout << s.isPalindrome(n);
        return 0;
    }