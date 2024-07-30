#include<iostream>
using namespace std;
int main()
{
    int number;
    string result;
    cout<<"Enter a number";
    cin>>number;
    result =(number>0) ?"The number is positive":"The number is negative";
    cout<<result;
    return 0;
}