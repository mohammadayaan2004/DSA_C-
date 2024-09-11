/*
Leetcode Q204. Count Primes
https://leetcode.com/problems/count-primes/

Given an integer n, return the number of prime numbers that are
strictly less than n.

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are
2, 3, 5, 7.

Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0


Constraints:

0 <= n <= 5 * 106
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countPrimes(int n)
    {
        vector<int> prime(n + 1, 1);
        if(n<=2)
        return 0;

        for (int i = 2; i*i < n; i++)
        {
            if (prime[i] == 1)
            {
                for (int j = i * i; j < n; j += i)
                {
                    prime[j] = 0;
                }
            }
        }
        
        int count=0;
        for (int i = 2; i < n; i++)
        {
            if (prime[i] == 1)
            {
                count++;
            }            
        }
        return count;
    }
};

int main()
{
    int n;
    cout << "Enter a number:-";
    cin >> n;

    Solution s;
    cout<<s.countPrimes(n);

    return 0;
}