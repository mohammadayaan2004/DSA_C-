#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(15);
    q.emplace(20);
    cout<<"Top Element -> "<<q.front()<<endl;
    q.pop();
    cout<<"Top Element after pop -> "<<q.front()<<endl;
    cout<<"Last Element -> "<<q.back()<<endl;
    cout<<"Size of queue -> "<<q.size()<<endl;
    q.back() +=1000;
    cout<<"Last Element -> "<<q.back()<<endl;
    cout<<"Size of queue -> "<<q.size()<<endl;


return 0;    
}   