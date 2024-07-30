#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> b={2,4,6,8,10};
    cout<<"Before pop_back() function "<<endl;
    for(size_t i=0;i<b.size();i++)
    {
        cout << "Index: " << i << " Value: " << b[i] << endl;
    } 
    cout<<endl;

    cout<<"After pop_back() function:- "<<endl;
    b.pop_back();// 10 is remove
    for(size_t i=0;i<b.size();i++)
    {
        cout << "Index: " << i << " Value: " << b[i] << endl;
    } 
    cout<<endl<<endl;    

return 0;
}
