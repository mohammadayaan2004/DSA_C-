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
    cout<<"find() function ->return index of the element which is asked:- ";
    cout<<"Index "<<find(v.begin(),v.end(),8)-v.begin();
   

return 0;
}