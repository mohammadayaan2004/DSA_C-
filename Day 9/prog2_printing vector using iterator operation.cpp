#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={2,4,6,8,10};
    cout<<"Printing vector :- "<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Printing vector in reverse direction:- "<<endl;
    for(auto jt=v.rbegin();jt!=v.rend();jt++)
    {
        cout<<*jt<<" ";
    }
return 0;    
}