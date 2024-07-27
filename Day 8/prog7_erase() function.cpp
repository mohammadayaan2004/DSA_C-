 #include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> f={6,7,8,9,10,12,14,16};
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
    //vector_name.erase(starting_position, ending_position);     
    cout<<"Multiple erase() function :- remove element from starting element to last element -1"<<endl;
    f.erase(f.begin()+2,f.begin()+4);
    for(size_t i=0;i<f.size();i++)
    {
        cout << "Index: " << i << " Value: " << f[i] << endl;
    }         

return 0;
}