#include<iostream>
using namespace std;
int main(){
    int ll,ul;
    cout<<"Enter Lower Limit :- ";
    cin>>ll;
    cout<<"Enter Upper Limit :- ";
    cin>>ul;    
    cout << "Palindrome numbers between " << ll << " and " << ul << " are: " << endl;

    for(int i=ll+1;i<=ul-1;i++)
    {
        int temp=i;
        int duplicate=i;
        int reverse=0;
        int lastdigit;
        while(temp>0)
        {
            lastdigit=temp%10;
            reverse=reverse*10+lastdigit;
            temp/=10;
        }
        if(reverse==duplicate)
        {
            cout<<duplicate<<endl; 
        } 
    } 
return 0;
}