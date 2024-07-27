#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={2,4,6,8,10};
    cout<<"Vector 1:-"<<endl;
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }  
    cout<<"\nVector 2:-"<<endl;
    vector<int> v2(2,50);
    for(size_t j=0;j<v2.size();j++)
    {
        cout<<v2[j]<<" ";
    } 
    cout<<"\nMerge Vector :-"<<endl;
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
return 0;
}