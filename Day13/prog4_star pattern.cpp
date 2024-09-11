#include<iostream>
using namespace std;
int main()
//    *
//   **
//  ***
// ****
//***** 
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;    
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= n-i; j++)//space
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)//star
        {
            cout<<"*"<<" ";
        }        
        cout<<endl;   
    }
 
return 0;
}
