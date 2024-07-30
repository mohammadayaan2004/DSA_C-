#include<iostream>
using namespace std;

int fib(int n)
{
    if(n == 0 || n == 1){
        return n;
    }
    
    return fib(n-1) + fib(n-2);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << num << "th Fibonacci number is: " << fib(num);
    return 0;
}
