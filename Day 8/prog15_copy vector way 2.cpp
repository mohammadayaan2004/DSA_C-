#include<iostream>
#include<vector>
using namespace std;
int main()
{    
    vector<int> v1(5,20);
    vector<int> v2;
    v2=v1; 
    cout<<"Vector 1 :- "<<endl;
    for (size_t i=0;i<v1.size();i++) 
    {
        cout << "Index: " << i << " Value: " << v1[i] << endl;
    }
    cout<<"\n"<<endl;
    cout<<"Vector 2 :- "<<endl;
    for (size_t i=0;i<v2.size();i++) 
    {
        cout << "Index: " << i << " Value: " << v2[i] << endl;
    }
    cout<<"\n"<<endl;
        
return 0;
}