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
    cout<<"back()  Function :-print the value of last index which is:-  "<<f.back()<<endl<<endl;
    cout<<f[f.size()-1];

return 0;
}