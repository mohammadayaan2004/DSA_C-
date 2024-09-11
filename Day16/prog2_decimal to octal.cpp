#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a decimal number:- ";
    cin>>n;
    int rem,ans=0,mul=1;
    while(n>0)
    {
        rem=n%8;
        n=n/8;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<"Octal Number is :- "<<ans;
return 0;
}