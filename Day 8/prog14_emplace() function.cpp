#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"emplace_back() function:- "<<endl;
    vector<int> a;
    a.emplace_back(4); //insert 4
    a.emplace_back(8); //insert 8
    a.emplace_back(5); //insert 5
    a.emplace_back(2); //insert 2
    a.emplace_back(7); //insert 7
    for (size_t i = 0; i < a.size(); i++) {
        cout << "Index: " << i << " Value: " << a[i] << endl;
    }
    cout<<endl;
    cout<<"size()     Function :-print the total no of element in the vector which is:- "<<a.size()<<endl;
    cout<<"capacity() Function :-print the size of the vector which is:- "<<a.capacity()<<endl;
    
    return 0;
}