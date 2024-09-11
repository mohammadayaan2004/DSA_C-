#include <iostream>
#include <vector>
using namespace std;
void function(int n)
{
    vector<int> prime(n + 1,1);
    prime[0]=prime[1]=0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j]=0;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 1)
        {
            cout << i << " ";
        }
    }
    
}
int main()
{
    int n;
    cout << "Enter a number:-" << endl;
    cin >> n;
    function(n);

    return 0;
}