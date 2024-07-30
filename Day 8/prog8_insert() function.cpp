#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> f={6,7,8,9,10,12,14,16};
    cout<<"Before insert() function :- "<<endl;
    for(size_t i=0;i<f.size();i++)
    {
        cout << "Index: " << i << " Value: " << f[i] << endl;
    }     
    cout<<"\ninsert() function :- insert element to given index value from the vector"<<endl;
    f.insert(f.begin()+2,50);
    for(size_t i=0;i<f.size();i++)
    {
        cout << "Index: " << i << " Value: " << f[i] << endl;
    } 
    cout<<endl;
    f.insert(f.begin()+0,2,3);
    for(size_t i=0;i<f.size();i++)
    {
        cout << "Index: " << i << " Value: " << f[i] << endl;
    } 
return 0;
}