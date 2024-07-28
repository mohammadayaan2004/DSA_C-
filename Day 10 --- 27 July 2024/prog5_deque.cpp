#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_front(20);    // 20
    d.push_back(10);     // 20 10
    d.push_front(40);    // 40 20 10
    d.pop_front();       // 20 10
    d.pop_back();        // 20
    d.emplace_back(100); // 20 100
    d.emplace_front(10); // 10 20 100
    d.erase(d.begin()+1);// 10 100
    d.push_back(1000);   // 10 100 1000
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Front Element :- "<<d.front()<<endl;
    cout<<"Last  Element :- "<<d.back()<<endl;
    cout<<"Middle Element :- "<<d.at(1)<<endl;
    cout<<"Empty or not :- "<<d.empty()<<endl;

return 0;    
}   