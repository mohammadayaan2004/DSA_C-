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
    cout<<"front() Function :-print the value of index 0 which is:- "<<f.front()<<endl;    


return 0;
}