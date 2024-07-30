#include<iostream>
#include<queue>
using namespace std;
int main()
{
    cout<<"Maximum Heap ->>"<<endl;
    priority_queue<int> q;
    q.push(10);
    q.push(35);
    q.emplace(30);
    q.emplace(25);
    int n=q.size();
    for(auto i=0;i<n;i++)
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl<<"Minimum Heap ->>"<<endl;
    priority_queue<int,vector<int>,greater<int>> q2;
    q2.push(10);
    q2.push(35);
    q2.emplace(30);
    q2.emplace(25);
    int n2=q2.size();
    for(auto i=0;i<n2;i++)
    {
        cout<<q2.top()<<" ";
        q2.pop();
    }

return 0;    
}   
