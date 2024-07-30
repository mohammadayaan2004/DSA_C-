#include<iostream>
using namespace std;
int main()
{
    char A;
    cout<<"Enter a character :- ";
    cin>>A;
    if(A>='a' && A<='z'){
        cout<<"Lowercase"<<endl;
    }
    else if(A>='A' && A<='Z'){
        cout<<"Uppercase"<<endl;

    }
    else if(A>='0' && A<='9'){
        cout<<"Digit"<<endl;
    }    
    else{
        cout<<"Special Character"<<endl;
    }    
    return 0;
}