//A B C D E
//A B C D 
//A B C
//A B
//A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        char k='A';
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;   
    }      
return 0;
}