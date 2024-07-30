#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comaparator(int a ,int b)
{ 
    if(a>50 || b>50)
    return a>b;
    return a<b;
}
int main()
{
    vector<int> v={100,0,12,46,26,8,1,50,54,70,69};
    cout<<"Before Sorting :- "<<endl;
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end(),comaparator);
    cout<<"\nAfter Sorting :- "<<endl;
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

     
return 0;
}