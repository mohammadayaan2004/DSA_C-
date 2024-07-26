#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> c(5);
    for(size_t i=0;i<c.size();i++)
    {
        cout<<"Enter value for Index: "<<i<<" :- ";
        cin>>c[i];
    }
    for(size_t i=0;i<c.size();i++)
    {
        cout << "Index: " << i << " Value: " << c[i] << endl;    
    }
    cout<<endl<<endl;
    
return 0;
}