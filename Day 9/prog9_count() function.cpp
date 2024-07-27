#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={2,4,6,8,10,8,9,8,65,3,5,8};
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"count() function"<<endl;
    cout<<"count the occurence of a specific value"<<endl;
    cout<<count(v.begin(),v.end(),8)<<endl;;
    cout<<count(v.begin(),v.end(),27);

return 0;
}