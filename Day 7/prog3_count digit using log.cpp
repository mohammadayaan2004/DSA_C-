#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :- ";
    cin>>num;
    int count=(log10(num))+1;

    
    cout<<"Number of Digit :- "<<count<<endl;    
return 0;
}