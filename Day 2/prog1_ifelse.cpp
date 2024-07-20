#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number";
    cin>>number;
    if(number>0)
    {
        cout<<"The number is positive";
    }
    else if(number<0)
    {
        cout<<"The number is negative";
    }
    else
    {
        cout<<"The number is zero";
    }
return 0;
}