#include<iostream>
#include<vector>
using namespace std;
int main()
{    
    vector<int> v1(4); //size of vector =4 & default value =0
    for (size_t i=0;i<v1.size();i++) 
    {
        cout << "Index: " << i << " Value: " << v1[i] << endl;
    }
    cout<<"\n"<<endl;

    vector<int> v2(4,2);//size of vector =4 and element value=2  
    for(size_t i=0;i<v2.size();i++)
    {
        cout << "Index: " << i << " Value: " << v2[i] << endl;
    } 
    cout<<endl<<endl;

    vector<int> b={2,4,6,8,10};
    for(size_t i=0;i<b.size();i++)
    {
        cout << "Index: " << i << " Value: " << b[i] << endl;
    } 
    cout<<endl<<endl;
  
    
return 0;
}