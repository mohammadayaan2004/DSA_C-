#include<iostream>
using namespace std;
int main()
//12345
//1234
//123
//12
//1
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 0; i < n ; i++)
    {
        int k=1;
        for (int j = 0; j <n ; j++)
        {
            if(j<n-i)
            {
                cout<<k<<" ";
                k++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;   
    }
return 0;
}