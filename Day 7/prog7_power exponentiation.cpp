#include<iostream>
using namespace std;
int powerFunction(int x,int n)
{
    int ans=1;
    while(n>0)
    {
        if(n%2!=0)
        {
            ans=ans*x;
            n=n-1;
        }
        else
        {
            n=n/2;
            x=x*x;//(x^n)=(x^2)^n/2
        }
    }    
    return ans;
}
int main(){
    int x,n;
    cout<<"Enter Base Number :- ";
    cin>>x;
    cout<<"Enter Exponent :- ";
    cin>>n;
    cout<<powerFunction(x,n);
    
return 0;
}