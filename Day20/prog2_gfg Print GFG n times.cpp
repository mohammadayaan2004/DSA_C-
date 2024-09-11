/*
gfg Q Print GFG n times

Print GFG n times without the loop.

Example:

Input:
5
Output:
GFG GFG GFG GFG GFG
Your Task:
This is a function problem. You only need to complete the function printGfg() that takes N as parameter and prints N times GFG recursively. 
Don't print newline, it will be added by the driver code.

*/
#include <iostream>
using namespace std;
class Solution
{
public:
    void printGfg(int N) 
    {
        string name="GFG";
        cout<<name<<" ";
        if(N>1)
        printGfg(N-1);
    }
};
int main()
{
    int n;
    cout << "Enter a number:-";
    cin >> n;
    Solution s;
    s.printGfg(n);
return 0;
}