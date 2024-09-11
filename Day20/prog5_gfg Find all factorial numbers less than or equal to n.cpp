/*
gfg Find all factorial numbers less than or equal to n

https://practice.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%5B%5D=-1&page=1&query=problemTypefunctionaldifficulty%5B%5D-1page1

A number n is called a factorial number if it is the factorial of a positive integer. 
For example, the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number n, the task is to return the list/vector of the factorial numbers
smaller than or equal to n.

Examples:

Input: n = 3
Output: 1 2
Explanation: The first factorial number is 1 which is less than equal to n. The
second number is 2 which is less than equal to n,but the 
third factorial number is 6 which is greater than n. So we print only 1 and 2.
Input: n = 6
Output: 1 2 6
Explanation: The first three factorial numbers are less than equal to n 
but the fourth factorial number 24 is greater than n. So we print only first three
factorial numbers.

*/

#include <iostream>
#include<vector>
using namespace std;


class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        long long fact = 1;
        int i=1;
        while(true)
        {
            if(fact>n)
            {
                break;
            }
            else
            {
            result.push_back(fact);            
            i++;
            fact *= i;
            }
        }
        return result;
    }
};  

int main()
{
    int n;
    cout << "Enter a number:-";
    cin >> n;
    
    Solution ob;
        vector<long long> ans = ob.factorialNumbers( n);
        for (auto num : ans) {
            cout << num << " ";
        }
return 0;
}