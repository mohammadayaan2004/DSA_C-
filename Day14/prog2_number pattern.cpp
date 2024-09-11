#include<iostream>
using namespace std;
//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1
//1 2 3 4 5 4 3 2 1
int main()
{    
    int n;
    cout<<"Enter no. of rows:- ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";  
        }

        int k=1;
        int middle=((2*i+1)/2);
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<k;
            if(j<middle)
            {
                k++;    
            }
            else
            {
                k--;
            }    
        }

        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";  
        }        
        cout<<endl;   
    } 
return 0;
}