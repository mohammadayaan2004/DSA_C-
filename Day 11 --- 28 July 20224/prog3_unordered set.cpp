#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> us;
    us.insert(10);
    us.insert(100);
    us.insert(10);
    us.insert(10);
    us.insert(12);
    us.insert(10);
    us.insert(30);
    us.insert(14);
    us.insert(5);    
    for (auto i:us)
    {
        cout<<i<<" ";
    }
return 0;
}