//E
//E D 
//E D C 
//E D C B  
//E D C B A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        char k='A'+n-1;
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" ";
            k--;
        }
        cout<<endl;   
    }      
return 0;
}