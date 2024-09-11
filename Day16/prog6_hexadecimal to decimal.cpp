#include<iostream>
#include<cmath>
#include<string>
using namespace std;
bool hexvalid(string n)
{
    for(char digit:n)
    {
        if(!((digit>='0' && digit<='9')||(digit>='A' && digit<='F')))
        {
        return false;
        }
    }
    return true;
}
int main() {
    string n;
    int len;
    cout << "Enter a hexadecimal number: " << endl;
    cin >> n;
    len = n.size();
    int ans=0,rem;
    if (!hexvalid(n)) 
    {
        cout << "Invalid hexadecimal number!";
    }  
    else
    {  
        for(int i=0;i<len;i++)
        {
            char digit=n[(len-1)-i];
            if(digit>='0' && digit<='9')
            {
                rem=digit-'0';
            }
            else
            {
                rem=digit-'A'+10;
            }    
            ans+=rem*pow(16,i);
        }
        cout<<"Decimal Number is :- "<<ans;    }
    return 0;
}
