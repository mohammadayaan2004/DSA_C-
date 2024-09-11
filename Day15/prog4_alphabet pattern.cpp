//F G H I J K
//F G H I J K
//F G H I J K
//F G H I J K
//F G H I J K
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of rows:- ";
    cin>>n;    
    for (int i = 1; i <=n ; i++)
    {
        char k='F';
        for (int j = 1; j <= n; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;   
    } 
return 0;
}