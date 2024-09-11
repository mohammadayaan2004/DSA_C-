#include<iostream>
using namespace std;
int main()
//1
//1 2
//1 2 3 
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 0; i <n ; i++)
    {
        int k=1;
        for (int j = 0; j <=i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;   
    }
return 0;
}