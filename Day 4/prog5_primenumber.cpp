#include<iostream>
#include<cmath>

using namespace std;
int main() {
    int num, i;
    bool isprime=true;    
    cout << "Enter a number: ";
    cin >> num;   
    if(num<=1){
        isprime=false;
    } else{
    for (i = 2; i <= sqrt(num); i++ ){  
            if (num % i == 0) {
                isprime=false;
                break;
            }
        }
    }    
    if (isprime==true) {
        cout << num << " is a prime number";
    } else {
        cout << num << " is not a prime number";
    }
    return 0;
}
