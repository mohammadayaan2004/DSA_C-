#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5 ; i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout<<i<<"\n";
    }    
    return 0;
}