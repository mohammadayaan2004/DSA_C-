#include<iostream>
using namespace std;
int main()
//10 10 10 10 10
//10 10 10 10 10
//10 10 10 10 10
//10 10 10 10 10  
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 1; i < n ; i++)
    {
        int k=10;
        for (int j = 1; j <= n ; j++)
        {
            cout<<k<<" ";
        }
        cout<<endl;   
    }
return 0;
}