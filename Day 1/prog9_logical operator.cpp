#include<iostream>
using namespace std;
int main()
{
    int a=100;

    cout<<(a>10 && a<1000)<<endl;  //true(1)
    cout<<(a>10 || a<30)<<endl;  //true
    cout<<!(a>10 && a<1000)<<endl;   //false beacause it reverse the result


    return 0;
}