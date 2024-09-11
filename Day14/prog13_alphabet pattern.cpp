//        A
//      A B A
//    A B C B A
//  A B C D C B A
//A B C D E D C B A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        for(int j=1 ;j<=n-i;j++)
        {
            cout<<"  ";
        }
        char k='A';
        int middle=2*i/2;    
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<k<<" ";
            if(j<middle)
            {
                k++;
            }
            else
            {
                k--;
            }
        }
        cout<<endl;   
    }      
return 0;
}