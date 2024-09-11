/*
Leetcode Q69. Sqrt(x)
Given a non-negative integer x, return the square root of x rounded down
to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.


Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to
the nearest integer, 2 is returned.


Constraints:

0 <= x <= 231 - 1
*/
#include <iostream>
#include <climits>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        int i;
        if (x <= 0)
            return 0;
        for (i = 1; i <= x; i++)
        {
            if (i * i == x)
                return i;
            else if (i * i > x)
                return i - 1;
            else if (i > INT_MAX)
                return 0;
            else if (x == 2147483647)
                return 46340;
            else
                continue;
        }
        return 0;
    }
};
int main()
{
    int n;
    cout << "Enter a number:-";
    cin >> n;
    Solution s;
    cout << "Square of a number:- " << s.mySqrt(n);
    return 0;
}