// leetcode q258
/*
Given an integer num, repeatedly add all its digits until the
result has only one digit, and return it.
Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2
Since 2 has only one digit, return it.

Example 2:

Input: num = 0
Output: 0
*/

#include <iostream>
using namespace std;
class Solution
{
public:
    int addDigits(int num)
    {
        int sum, rem;
        while (num > 9)
        {
            sum = 0;
            while (num != 0)
            {
                rem = num % 10;
                num = num / 10;
                sum = sum + rem;
            }
            num = sum;
        }
        return num;
    }
};

int main()
{
    int n;
    cout << "Enter a number:- ";
    cin >> n;

    Solution s;
    cout << "Sum of digits:- " << s.addDigits(n);
    return 0;
}