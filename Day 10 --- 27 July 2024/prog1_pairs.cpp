#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int ,int> p1={12,20};// declaration
    pair<int ,int> p2(5,30);  // initialisation
    cout<<p1.first<<" "<<p1.second<<endl; //print
    cout<<p2.first<<" "<<p2.second;       //printing pairs value    
return 0;    
}