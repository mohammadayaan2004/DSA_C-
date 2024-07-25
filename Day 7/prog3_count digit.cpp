#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :- ";
    cin>>num;
    int count=0;
    while(num>0)
    {
        num/=10;
        count+=1;
    }
    cout<<"Number of Digit :- "<<count<<endl;    
return 0;
}

