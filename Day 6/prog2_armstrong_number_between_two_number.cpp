#include <iostream>
#include <cmath>
using namespace std;
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n = n/10;
    }
    return count;
}
int isArmstrong(int n) {
    int temp = n;
    int sum = 0;
    int digits = countDigits(n); // Number of digits in the number

    while ( n > 0) {
        int r = n % 10;
        sum = sum + pow(r, digits); // Compute the power of digit and add to sum
        n /= 10;
    }

    return (temp == sum); // Return 1 if Armstrong, otherwise 0
}

int main() {
    int ll , ul ;
    cout<<"Enter Lower Limit :- ";
    cin>>ll;
    cout<<"Enter Upper Limit :- ";
    cin>>ul;    
    cout << "Armstrong numbers between " << ll << " and " << ul << " are: " << endl;

    for (int i = ll; i <= ul; i++) {
        if (isArmstrong(i)) {
            cout << i << endl;
        }
    }
    
    return 0;
}
