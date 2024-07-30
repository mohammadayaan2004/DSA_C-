#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 6, c = 9, d = 30, e = 100;
    long long x=123456789101112;
    cout << "Number of set bits in " << a << " is: " << __builtin_popcount(a) << endl;
    cout << "Number of set bits in " << b << " is: " << __builtin_popcount(b) << endl;
    cout << "Number of set bits in " << c << " is: " << __builtin_popcount(c) << endl;
    cout << "Number of set bits in " << d << " is: " << __builtin_popcount(d) << endl;
    cout << "Number of set bits in " << e << " is: " << __builtin_popcount(e) << endl;
    cout << "Number of set bits in " << x << " is: " << __builtin_popcountll(x) << endl;

    return 0;
}
