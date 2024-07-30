#include <iostream>
#include <math.h>
using namespace std;

int countdigits(int n)
{
    int count = 0;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    return count;
}

bool isarmstrong(int n)
{
    int temp, sum = 0, r;
    temp = n;    
    int digit = countdigits(n);
    while (n > 0)
    {
        r = n % 10;
        sum += pow(r, digit);
        n = n / 10;
    }
    return (temp == sum);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (isarmstrong(num)) {
        cout << "Armstrong";
    } 
    else {
        cout << "Not Armstrong";
    }
    return 0;
}

