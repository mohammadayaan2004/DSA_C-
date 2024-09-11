/*
gfg  Print 1 To N Without Loop
https://bit.ly/3K2epHv

Print numbers from 1 to n without the help of loops. You only need to complete the function printNos() that takes N as parameter and prints number from 1 to N recursively.

Don't print newline, it will be added by the driver code.

Examples

Input: n = 10
Output: 1 2 3 4 5 6 7 8 9 10
Input: n = 5
Output: 1 2 3 4 5
*/
#include <iostream>
using namespace std;

class Solution
{
public:
    void printNos(int N,int i=1)
    {
        if(i<=N)
        {
        cout << i << " ";
        printNos(N, i + 1);
        }
    }
};

int main()
{
    int n;
    cout << "Enter a number:-";
    cin >> n;
    Solution s;
    s.printNos(n);
    return 0;
}