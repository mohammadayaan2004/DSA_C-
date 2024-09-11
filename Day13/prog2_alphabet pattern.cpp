#include<iostream>
using namespace std;
//a
//b b
//c c c
//d d d d
//e e e e e
int main()
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
        char name='a';    
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<name<<" ";
        }
        name++;    
        cout<<endl;   
    }
return 0;
}