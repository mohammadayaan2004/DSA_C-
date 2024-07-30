#include<iostream>
using namespace std;
int main()
{
    int a=200;
    int* ptr=&a;
    cout<<"Reference Operator:- "<<ptr;
    cout<<"\nDerefernce Operator:- "<<*ptr; 
 
    return 0;
}