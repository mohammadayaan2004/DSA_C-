#include<iostream>
using namespace std;
int main()
{
    int n1 , n2 ,sum=0;
    cout<<"Enter Number1 :- ";
    cin>>n1;
    cout<<"Enter Number2 :- ";
    cin>>n2;
    cout<<"Sum of all odd number is :- ";
    for(int i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    cout<<sum;
return 0;    
}
