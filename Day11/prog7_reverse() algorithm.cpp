#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={2,4,6,8,10};
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"reverse() algorithm"<<endl;
    reverse(v.begin(),v.end());
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }   

return 0;
}