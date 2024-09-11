#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a decimal number:-"<<endl;
    cin>>n;
    int rem,ans=0,mul=1;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<"Binary  Number is :- "<<ans;
return 0;
}