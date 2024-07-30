#include<iostream>

#include<map>
using namespace std;
int main()
{
    map<int , int> mn;

    mn[1]=100;
    mn[23]=200;
    mn[3]=300;
    mn[45]=300;
    mn[50]=300;
    mn.insert({5,400});
    mn.emplace(60,600);
    mn[3]=700;
    for(auto i:mn)
    {
        cout<<"Key:- "<<i.first<<" Value:- "<<i.second<<endl;
    }
    cout<<"Key present or not -> "<<mn.count(3)<<endl;    
    cout<<"Key present or not -> "<<mn.count(-3)<<endl;
    auto it=mn.find(3);
    cout<<"Key 3 value :- "<<(*it).second<<endl;
    mn.erase(3);  
    for(auto i:mn)
    {
        cout<<"Key:- "<<i.first<<" Value:- "<<i.second<<endl;
    }      
    map<int , pair<int ,int>> mn1;
    mn1[100]={1000,2000};
    cout<<mn1.at(100).first<<" "<<mn1.at(100).second<<endl;
    map<pair<int , int> ,int> mn2;    
    mn2[{150,300}]={10000};
    cout<<mn2.at({150,300});

return 0;
}