#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,int> mm;
    mm.insert({1,100});
    mm.insert({1,150});
    mm.insert({2,200});
    mm.insert({2,250});
    mm.insert({3,200});
    mm.insert({3,250});
    for(auto i:mm)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
return 0;
}