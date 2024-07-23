#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int a=0,b=1,c;
    if(num == 0 || num== 1){
        cout << num << "th Fibonacci number is: " << num;
    }
    for(int i =2;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout << num << "th Fibonacci number is: " << b; 
    return 0;
}
