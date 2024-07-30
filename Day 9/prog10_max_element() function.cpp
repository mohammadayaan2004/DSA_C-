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
    cout<<"max_element() function"<<endl;
    cout<<"largest value within a given set"<<endl;
    auto maximum=max_element(v.begin(),v.end());
    cout<<"Largest element is :- "<<*maximum;
    int a=10;
    int b=1001;
    cout<<"\nLargest element is :- "<<max(a,b);

return 0;
}