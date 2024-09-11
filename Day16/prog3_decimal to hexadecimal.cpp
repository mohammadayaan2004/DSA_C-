#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a decimal number:-";
    cin>>n;
    char hex[100];
    int rem=0,i=0;
    while(n>0)
    {
        rem=n%16;
        n=n/16;
        if(rem<10)
        {
            hex[i]=48+rem;
            i++;
        }
        else
        {
            hex[i]=55+rem;
            i++;
        }
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<hex[j];
    }
return 0;
}