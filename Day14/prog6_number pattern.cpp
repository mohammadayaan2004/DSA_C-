//1
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1
//0 1 0 1 0 1
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if((i%2!=0 && j%2!=0)||(i%2==0 && j%2==0))
            {
                k=1;
                cout<<k<<" ";
                
            }
            else 
            {
                k=0;
                cout<<k<<" ";
            }
        }   
        cout<<endl;   
    }
return 0;
}