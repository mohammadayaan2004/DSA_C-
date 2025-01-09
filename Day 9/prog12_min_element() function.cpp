#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={2,4,6,8,10,9,1};
 //   for(size_t i=0;i<v.size();i++)
   // {
   //     cout<<v[i]<<" ";
    //}
    // cout<<endl;
    // cout<<"min_element() function"<<endl;
    // cout<<"smallest value within a given set is:-"<<endl;
    // auto maximum=min_element(v.begin(),v.end());
    // cout<<"minimum element is :- "<<*maximum;
    // int a=1;
    // int b=1001;
    // cout<<"\nminimim element is :- "<<min(a,b);
    cout<<endl;
    int largest_num;
    for(size_t i=0;i<v.size();i++)
    {
        if(v[0]>v[i]){
                largest_num=v[i];

        }
    }
                cout<<largest_num<<" ";



return 0;
}