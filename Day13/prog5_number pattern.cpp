#include<iostream>
using namespace std;
//        1
//      2 1
//    3 2 1
//  4 3 2 1
//5 4 3 2 1
int main()
{
    int n;
    cout<<"Enter no. of rows:- ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        int k=i;
        for (int j = 1; j <=n-i;j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" "; 
            k--; 
        }
        cout<<endl;   
    } 
return 0;
}