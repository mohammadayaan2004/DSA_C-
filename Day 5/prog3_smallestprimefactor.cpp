#include<iostream>
#include<cmath>
using namespace std;
int smallestprimefactor(int n)
{
    if(n<=1){
        return -1;
    }
    else if ( n % 2 == 0 ){
        return 2;
    }
    else
    {	
        for (int i = 3; i <= sqrt(n) ; i=i+2) 
	    { 
		    if (n % i == 0) 
		    { 
                return i;
		    } 
	    } 
    }
    return n;//if factor are found
}
int main() 
{ 
	int num ;
    cout<<"Enter number :- ";
    cin>>num;
    cout<<"Smallest Prime Factor :- "<<smallestprimefactor(num);
    
return 0; 
}

