#include<iostream>
using namespace std;
int main()
{
    int a;
    a=10;             // assign the value to the a
    cout<<a<<endl;
    a+=5;                 // add and assign
    cout<<a<<endl;
    a-=5;                 // subtract and assign
    cout<<a<<endl;
    a*=5;                 // multiply and assign
    cout<<a<<endl;
    a/=5;                 // divide and assign
    cout<<a<<endl;
    a%=5;                 // modular and assign 

    int b=5;
    int c=3;

    b&=c;                 // bitwise AND assignment operator
    cout<<b<<endl;
    b=5;
    b|=c;                 // bitwise OR assignment operator
    cout<<b<<endl;
    b=5;
    b^=c;                 // bitwise XOR assignment operator
    cout<<b<<endl;  
    b=5;
    b<<=c;                // bitwise left shift assignment operator
    cout<<b<<endl;
    b=5;
    b>>=c;                // bitwise right shift assignment operator 
    cout<<b<<endl;
 
    return 0;
}    