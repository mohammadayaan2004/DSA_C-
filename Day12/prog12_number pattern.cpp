#include<iostream>
using namespace std;
int main()
//1 8 27 64 125
//1 8 27 64 125
//1 8 27 64 125
//1 8 27 64 125
//1 8 27 64 125
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n ; j++)
        {
            cout<<j*j*j<<" ";
        }
        cout<<endl;   
    }
return 0;
}