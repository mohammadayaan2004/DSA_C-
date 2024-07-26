 #include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> f={6,7,8,9,10};
    cout<<"Before erase() function :- "<<endl;
    for(size_t i=0;i<f.size();i++)
    {
        cout << "Index: " << i << " Value: " << f[i] << endl;
    }     
    
    cout<<"\nerase() function :- remove index value from the vector"<<endl;
    f.erase(f.begin()+2);
    for(size_t i=0;i<f.size();i++)
    {
        cout << "Index: " << i << " Value: " << f[i] << endl;
    } 
    cout<<endl;    
        

return 0;
}