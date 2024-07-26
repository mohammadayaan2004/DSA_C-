#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> b={2,4,6,8,10};
    cout<<"Before clear() function "<<endl;
    for(size_t i=0;i<b.size();i++)
    {
        cout << "Index: " << i << " Value: " << b[i] << endl;
    } 
    cout<<endl;

    cout<<"clear() function:- All the value will be removed from the vector"<<endl;   
    b.clear(); 
    for(size_t i=0;i<b.size();i++)
    {
        cout << "Index: " << i << " Value: " << b[i] << endl;
    } 
        

return 0;
}
