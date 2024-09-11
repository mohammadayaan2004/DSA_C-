/*
https://www.geeksforgeeks.org/problems/leap-year0943/1

Example 1:
Input:
N = 4
Output:
1
Explanation:
4 is not divisible by 100
and is divisible by 4 so its
a leap year
Example 2:

Input:
N = 2021
Output:
0
Explanation:
2021 is not divisible by 100
and is also not divisible by 4
so its not a leap year
*/

#include <iostream>
using namespace std;
class Solution
{
public:
    int isLeap(int N)
    {
        if((N%4==0 && N%100!=0) || (N%400==0))
        return 1;
        else
        return 0;
    }
};

int main()
{
    int n;
    cout << "Enter a number:- ";
    cin >> n;

    Solution s;
    cout << s.isLeap(n);
    return 0;
}