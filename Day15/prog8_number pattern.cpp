//4444444
//4333334
//4322234
//4321234
//4322234
//4333334
//4444444
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter no. of rows (n): ";
    cin >> n; 
    int size = 2 * n - 1;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            int top=i-1;
            int left=j-1;
            int right=size-j;
            int down=size-i;
            int num =n-min({top,left,right,down});
            cout <<num ;
        }
        cout << endl; 
    }
    return 0;
}


