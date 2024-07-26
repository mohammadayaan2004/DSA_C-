#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of vector :- "<<endl;
    cin>>n;
    vector<int> d(n);    
    for(size_t i=0;i<d.size();i++)
    {
        cout<<"Enter value for Index: "<<i<<" :- ";
        cin>>d[i];
    }
    for(size_t i=0;i<d.size();i++)
    {
        cout << "Index: " << i << " Value: " << d[i] << endl;    
    }
    cout<<endl<<endl; 
return 0;
}