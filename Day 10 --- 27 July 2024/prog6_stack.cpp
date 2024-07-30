#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(5);
    s.emplace(100);
    cout<<"Top Element -> "<<s.top()<<endl;
    cout<<"Empty or not -> "<<s.empty()<<endl;
    cout<<"Size of stack -> "<<s.size()<<endl;
    s.pop();
    cout<<"Size of stack -> "<<s.size()<<endl;
    stack<int> s2;
    s2.push(1000);
    s2.push(2000);
    s.swap(s2);
    cout<<"After swap top element -> "<<s2.top();

return 0;    
}   