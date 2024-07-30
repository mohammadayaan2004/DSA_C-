#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string s="123";
    do
    {
        cout<<s<<endl;
    } while (next_permutation(s.begin(),s.end()));
    
return 0;
}
