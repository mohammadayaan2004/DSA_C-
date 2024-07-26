#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(4); //insert 4
    a.push_back(8); //insert 8
    a.push_back(5); //insert 5
    a.push_back(2); //insert 2
    a.push_back(7); //insert 7
    for (size_t i = 0; i < a.size(); i++) {
        cout << "Index: " << i << " Value: " << a[i] << endl;
    }

    cout<<endl;
    cout<<"size()     Function :-print the total no of element in the vector which is:- "<<a.size()<<endl;
    cout<<"capacity() Function :-print the size of the vector which is:- "<<a.capacity()<<endl;

return 0;
}