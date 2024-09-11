#include<iostream>
#include<math.h>
using namespace std;
bool octvalid(string n)
{
    for(char digit:n)
    {
        if(!(digit>='0') || !(digit<='7'))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string num;
    cout<<"Enter a octal Number :-";
    cin>>num;
    int rem,ans=0,i=0;  
    if (!octvalid(num)) 
    {
        cout << "Invalid octal number!";
    }  
    else
    {  
        int n=stoi(num);
        while(n>0)
        {
            rem=n%10;
            ans=rem*pow(8,i)+ans;
            i++;
            n=n/10;
        }
        cout<<"Decimal Number is :- "<<ans;
    }
return 0;
}
