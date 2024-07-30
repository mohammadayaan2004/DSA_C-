#include<iostream>
using namespace std;
int fib(int n)
{
    if(n == 0 || n == 1){
        return n;
    }
    else{
    return fib(n-1) + fib(n-2);
    }
}
int main()
{
    int ll , ul ;
    cout<<"Enter Lower Limit :- ";
    cin>>ll;
    cout<<"Enter Upper Limit :- ";
    cin>>ul;    
    cout<<"Fibonacci Series :- "<<endl;
    if(ll>ul || ll<0){
        cout<<"Invalid Input"<<endl;
    }
    else{
        cout<<"Fibonacci Series :- "<<endl;
        for(int i=ll;i<=ul;i++)
        {
            cout << i<< "th Fibonacci number is: "  << fib(i)<<endl;
        }
    }
    return 0;
}
