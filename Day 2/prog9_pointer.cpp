#include<iostream>
using namespace std;
int main()
{
    int a=200;
    int* ptr=&a;
    cout<<"Variable value:- "<<a;
    cout<<"\nPointer address:- "<<ptr; 
    cout<<"\n"<<&ptr; 
    return 0;
}