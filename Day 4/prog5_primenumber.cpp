#include<iostream>
using namespace std;
int main(){
    int num,i;
    bool isprime=true;
    cout<<"Enter a number :- ";
    cin>>num;
    if(num<=1){
        isprime=false;
    }
    else{
        for(i=2;i<=num/2;++i){
            if(num%i==0){
                isprime=false;
                break;
            }    
        }
    }
    if(isprime){
        cout<<num<<" is a prime number";
    }
    else{
        cout<<num<<" is not a prime number";        
    }

return 0;
}