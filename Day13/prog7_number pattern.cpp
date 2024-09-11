#include<iostream>
using namespace std;
//        1
//      1 2
//    1 2 3
//  1 2 3 4
//1 2 3 4 5
int main()
{
    int n;
    cout<<"Enter no. of rows:- ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        int k=1;
        for (int j = 1; j <=n-i;j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" "; 
            k++;
        }
        
        cout<<endl;   
    } 
return 0;
}