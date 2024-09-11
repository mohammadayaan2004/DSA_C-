#include<iostream>
using namespace std;
int main()
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n ; j++)
        {
            cout<<j*j<<" ";
        }
        cout<<endl;   
    }
return 0;
}