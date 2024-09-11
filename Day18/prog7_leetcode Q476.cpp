/*
Leetcode Q476. Number Complement

*/
#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    int findComplement(int n)
    {
        if (n == 0)
            return 1;
        int rem, ans = 0, mul = 0;
        while (n != 0)
        {
            rem = n % 2;
            rem = rem ^ 1; //xor
            n /= 2;
            //ans = ans + rem * mul;
            ans = rem * pow(2, mul) + ans;
            mul++;
            //mul *= 2;//2^0,2^1,2^2,2^3 ....
        }
        return ans;
    }
};
int main()
{
    int n;
    cout << "Enter a number:-";
    cin >> n;
    Solution s;
    cout << s.findComplement(n);
return 0;
}