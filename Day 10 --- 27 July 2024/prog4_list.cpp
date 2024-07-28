#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_front(20);    // 20
    l.push_back(10);     // 20 10
    l.push_front(40);    // 40 20 10
    l.pop_front();       // 20 10
    l.pop_back();        // 20
    l.emplace_back(100); // 20 100
    l.emplace_front(10); // 10 20 100
    l.erase(next(l.begin(), 1)); // Erases the second element

    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    list<int> l2(5,200);
    for(int i:l2)
    {
        cout<<i<<" ";
    }    
    
return 0;    
}   