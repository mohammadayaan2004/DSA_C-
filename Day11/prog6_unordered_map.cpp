#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> umap;
    umap.insert({1,100});
    umap.insert({1,150});
    umap.insert({2,200});
    umap.insert({9,250});
    umap.insert({3,200});
    umap.insert({5,250});
    for(auto i:umap)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
return 0;
}