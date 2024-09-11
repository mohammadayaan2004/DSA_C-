#include<iostream>
#include<cmath>
#include<string>
using namespace std;
bool binvalid(string n)
{
    for(char digit:n)
    {
        if(digit!='1' && digit!='0')
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string num;
    cout << "Enter a binary number: " ;
    cin >> num;
    int rem,ans=0,i=0;
    if (!binvalid(num)) 
    {
        cout <<"Invalid Binary number!";
    } 
    else
    {
        int n=stoi(num);
        while(n>0)
        {
            rem=n%10;
            n=n/10;
            ans=rem*pow(2,i)+ans;
            i++;
        }
        cout<<"Decimal Number is :- "<<ans;
    }
return 0;
}
