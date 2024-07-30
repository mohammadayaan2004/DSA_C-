#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(12);
    ms.insert(10);
    ms.insert(40);
    ms.insert(14);
    ms.insert(10);
    ms.insert(10);
    
    cout<<"No of 10 digit:- "<<ms.count(10)<<endl;
    for(auto i:ms)
    {
        cout<<i<<" ";
    }    
    cout<<endl;
    ms.erase(ms.find(10));// remove one 10

    for(auto i:ms)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    ms.erase(ms.find(10),next(next(ms.find(10)),2)); //remove three 10

    for(auto i:ms)
    {
        cout<<i<<" ";
    }
    cout<<endl;    
    ms.erase(10);  //remove all 10
    for(auto i:ms)
    {
        cout<<i<<" ";
    }  
    cout<<endl;

return 0;
}