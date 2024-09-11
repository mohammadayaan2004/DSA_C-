#include<iostream>
using namespace std;
int main()
//1  2  3  4  5
//6  7  8  9  10
//11 12 13 14 15
//16 17 18 19 20
//21 22 23 24 25
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    int k=1;
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n ; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;   
    }
return 0;
}