#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={2,4,6,8,10};
    cout<<"Searching in :- "<<endl;
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Return 1 if element found : "<<binary_search(v.begin(),v.end(),8)<<endl;;
    cout<<"Return 0 if element not found : "<<binary_search(v.begin(),v.end(),27);

return 0;
}