#include<iostream>
using namespace std;
//        A
//      A B
//    A B C 
//  A B C D
//A B C D E 
int main()
{
    int n;
    cout<<"Enter no. of rows:- ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        char name='A';
        for (int j = 1; j <= n-i ;j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<name<<" "; 
            name++;
        }
        cout<<endl;   
    } 
return 0;
}