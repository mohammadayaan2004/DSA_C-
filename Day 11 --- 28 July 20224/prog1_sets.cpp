#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);////O(logn)
    s.insert(2);
    s.insert(5);
    s.insert(10);
    s.insert(12);
    s.insert(4);
    s.insert(40);
    s.insert(14);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    auto it=s.find(10); // return an iterator //O(logn)
    cout<<*it<<" element has been found"<<endl;
    cout<<"No of 10 in this set :- "<<s.count(10)<<endl;//O(logn)
    s.erase(50); //O(logn)
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    auto it1=s.find(2);
    auto it2=s.find(10);
    s.erase(it1,it2);
    for(auto i:s)
    {
        cout<<i<<" ";
    }    
return 0;
}