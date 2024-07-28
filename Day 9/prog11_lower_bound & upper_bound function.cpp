#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={2,4,6,6,6,6,8,10};
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"lower_bound() function"<<endl;
    auto lower=lower_bound(v.begin(),v.end(),6);
    cout<<lower-v.begin();
    cout<<endl;
    cout<<"upper_bound() function"<<endl;
    auto upper=upper_bound(v.begin(),v.end(),6);
    cout<<upper-v.begin(); 

return 0;
}