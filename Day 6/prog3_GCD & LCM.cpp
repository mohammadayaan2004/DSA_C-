#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n1 , n2 ,gcd,lcm;
    cout<<"Enter Number1 :- ";
    cin>>n1;
    cout<<"Enter Number2 :- ";
    cin>>n2;
    gcd=1;
    for(int i=1;i<=n1;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    cout<<"GCD of "<<n1<<" and "<<n2<<" is :- "<<gcd;
    lcm=(n1*n2)/gcd;
    cout<<"\nLCM of "<<n1<<" and "<<n2<<" is :- "<<lcm;


    return 0;
}