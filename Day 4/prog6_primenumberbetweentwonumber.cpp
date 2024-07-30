#include<iostream>
using namespace std;
int main() {
    int l,u, i,j;  
    cout << "Enter lowerlimit: ";
    cin >> l;   
    cout << "Enter upperlimit: ";
    cin >> u;     
    for (i = l+1; i <= u-1; i++ ){  
        for(j=2;j<i;j++){
            if (i % j == 0) {
                break;
            }
        }
        if(i==j){
            cout<<j<<endl;
        }
    }    
    return 0;
}


