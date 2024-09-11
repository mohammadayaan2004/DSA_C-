//A
//B B 
//C C C 
//D D D D 
//E E E E E
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    char k='A';
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" ";   
        }   
        k++; 
        cout<<endl;   
    }
return 0;
}