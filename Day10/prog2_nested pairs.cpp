#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int ,int> p1={12,20};
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int ,pair<int ,int>> p2 = {5,{12,20}};//nested pairs
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
return 0;    
}