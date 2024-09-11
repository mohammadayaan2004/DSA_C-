#include<iostream>
using namespace std;
//5
//5 4
//5 4 3
//5 4 3 2
//5 4 3 2 1
int main()
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        int k=5;
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" ";
            k--;
        }
        cout<<endl;   
    }
return 0;
}