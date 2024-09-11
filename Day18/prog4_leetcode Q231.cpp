/*
leetcode Q231. Power of Two
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.


Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false


Constraints:

-231 <= n <= 231 - 1

yt:- https://youtu.be/IEg_v2YanYI?si=rccwnI3X3WDcifvY
*/
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n < 1)
            return 0;

        if(n==1)
            return 1;

        if(n%2==1)//odd
            return 0;

        return isPowerOfTwo(n/2);        
    }
};
int main()
{
    int n;
    cout << "Enter a number:-" << endl;
    cin >> n;
    Solution s;
 
    cout << "Power of Two :- " << s.isPowerOfTwo(n);
    return 0;
}