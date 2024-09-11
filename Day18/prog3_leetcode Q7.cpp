/*
leetcode Q7. Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer 
range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers 
(signed or unsigned).


Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1
*/
#include<iostream>
#include<climits>
using namespace std;
class Solution {
public:
    int reverse(int n) {
    int reverse=0;
    while(n!=0){
        int lastdigit =n % 10;
        if(reverse>INT_MAX/10 || reverse<INT_MIN/10)
        return 0;
        reverse= reverse*10 + lastdigit;
        n=n/10;        
    }
  
    return reverse;
    }
};
int main()
{
    int n;
    cout << "Enter a number:- ";
    cin >> n;

    Solution s;
    cout << "Reverse of digit :- "<< s.reverse(n);
    return 0;
}
