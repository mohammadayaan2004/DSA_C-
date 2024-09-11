/*
gfg Sum of first n terms

https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

Example 1:

Input:
n=5
Output:
225
Explanation:
13+23+33+43+53=225
Example 2:

Input:
n=7
Output:
784
Explanation:
13+23+33+43+53+63+73=784
*/
#include <iostream>
using namespace std;
class Solution {
  public:
    long long sumOfSeries(long long n) 
    {
        long long sum=(n*(n+1))/2;
        return sum*sum;
    }
};
int main()
{
    int n;
    cout << "Enter a number:-";
    cin >> n;
    Solution s;
    cout<<s.sumOfSeries(n);
return 0;
}