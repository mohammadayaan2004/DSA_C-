#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main()
{
    int a=10,b=23;
    cout<<"Before Swapping :-"<<"a="<<a<<" and b="<<b<<endl;
    swap(&a,&b);
    cout<<"After Swapping :-"<<"a="<<a<<" and b="<<b<<endl; 
 
return 0;
}