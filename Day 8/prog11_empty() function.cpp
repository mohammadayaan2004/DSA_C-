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
    cout<<"empty() Function :-return 0 if their are some element present in the vector :-- "<<f.empty()<<endl<<endl;
    f.clear();
    cout<<"empty() Function :-return 1 if their are no element present in the vector   :-- "<<f.empty()<<endl<<endl;


return 0;
}