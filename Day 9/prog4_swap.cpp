#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={2,4,6,8,10};
    vector<int> v2={1,3,5,7,9};
    cout<<"Before swaping :- "<<endl;
    cout<<"Vector 1:- "<<endl;
    for(size_t i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\nVector 2:- "<<endl;
    for(size_t i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    v2.swap(v1);
    cout<<"\nAfter swaping :- "<<endl;
    cout<<"Vector 1:- "<<endl;
    for(size_t i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\nVector 2:- "<<endl;
    for(size_t i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }    
    swap(v1,v2);
    cout<<endl;
        cout<<"Vector 1:- "<<endl;
    for(size_t i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\nVector 2:- "<<endl;
    for(size_t i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }    
return 0;
}