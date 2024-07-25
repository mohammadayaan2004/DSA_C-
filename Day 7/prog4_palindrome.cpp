#include<iostream>
using namespace std;
int main(){
    int num,lastdigit,reverse=0;
    cout<<"Enter a number :- ";
    cin>>num;
    int duplicate=num;
    while(num>0)
    {
        lastdigit=num%10;
        reverse=reverse*10+lastdigit;
        num/=10;
    }
    if(reverse==duplicate)
    {
        cout<<duplicate<<" is a palindrome"; 
    }  
    else
    {
        cout<<duplicate<<" is not a palindrome"; 
    } 
return 0;
}