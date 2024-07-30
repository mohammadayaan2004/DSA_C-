#include<iostream>
using namespace std;
int main()
{
    int a=12,b=25;
    cout<<(a&b)<<endl;//bitwise and 
    cout<<(a|b)<<endl;//bitwise or
    cout<<(a^b)<<endl;//bitwise xor
    cout<<(~a)<<endl; //bitwise complement

    int c=5;//0101 =5 in decimal
    cout<<(c<<1)<<endl;//bitwise shift left
    cout<<(c>>1)<<endl;//bitwise shift right

return 0;
}