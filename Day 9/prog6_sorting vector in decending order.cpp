#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={12,46,26,8,1};
    cout<<"Before Sorting :- "<<endl;
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end(),greater<>());
    cout<<"\nAfter Sorting :- "<<endl;
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"\nAfter Sorting Way 2 :- "<<endl;
    sort(v.rbegin(),v.rend());
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
     
return 0;
}