//1             1
//1 2         2 1
//1 2 3     3 2 1
//1 2 3 4 4 3 2 1 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of rows:- ";
    cin>>n;    
    for (int i = 1; i <=n ; i++)
    {
        int k=1;
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        for (int j = 1; j <=2*n-(2*i) ; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            k--;            
            cout<<k<<" ";
        }
        cout<<endl;   
    } 
return 0;
}