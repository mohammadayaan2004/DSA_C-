/*
gfg QSquares in N*N Chessboard
https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1?page=1&difficulty[]=-1&difficulty[]=0&category[]=Numbers&category[]=number-theory&sortBy=submissions

Find the total number of Squares in a N*N chessboard.

 
Example 1:

Input:
N = 1
Output:
1
Explanation:
A 1*1 chessboard has only 1 square.
Example 2:

Input:
N = 2
Output:
5
Explanation:
A 2*2 chessboard has 5 squares.
4 1*1 squares and a 2*2 square.

Company Tags
Goldman Sachs MAQ Software

Topic Tags
number-theory Mathematical permutation Algorithms
*/

#include <iostream>
using namespace std;
class Solution
{
public:
    long long squaresInChessBoard(long long N) 
    {
        long long int sum=0;
        for(long long int i=1;i<=N;i++)
        {
            sum=sum+i*i;
        }
        return sum;
    }
};
int main()
{
    long long int n;
    cout << "Enter a number:-";
    cin >> n;
    Solution s;
    cout << s.squaresInChessBoard(n);
return 0;
}