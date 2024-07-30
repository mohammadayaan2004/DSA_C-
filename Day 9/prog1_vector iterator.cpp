#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={2,4,6,8,10};
    vector<int>::iterator it=v.begin();
    cout<<"First Element of the vector :- "<<*it<<endl;
    it=v.end();//point to n+1
    it--;// Initially point to index 5 
    cout<<"Last  Element of the vector :- "<<*it<<endl;

    vector<int>::reverse_iterator rit=v.rbegin();//point to index 4
    cout<<"First Element of the vector :- "<<*rit<<endl;    
    rit=v.rend();
    rit--;// Initially point to index -1
    cout<<"Last  Element of the vector :- "<<*rit<<endl;        
return 0;
}