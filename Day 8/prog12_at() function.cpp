#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> f={6,7,8,9,10};
    for(size_t i=0;i<f.size();i++)
    {
        cout << "Index: " << i << " Value: " << f[i] << endl;
    }     
    cout<<"at() Function :-print the value of index which is asked from the vector which is:- "<<f.at(3)<<endl<<endl;

return 0;
}