/*
gfg QPrint N to 1 without loop
*/
#include <iostream>
using namespace std;
class Solution
{
public:
    void printNos(int N) 
    {
        cout<<N<<" ";
        if(N>1)
        printNos(N-1);
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