#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	int n ;
    cout<<"Enter number :- ";
    cin>>n;
    long long largestprimefactor=0;
    while( n % 2 ==0 ){
        largestprimefactor=2;
        n=n/2;
    }
	for (int i = 3; i <= sqrt(n) ; i=i+2) 
	{ 
		while (n % i == 0) 
		{ 
            largestprimefactor=i;  
			n = n / i;  
		} 
	} 
    if(n>2){
        largestprimefactor=n;
    }
    cout<<"Largest Prime Factor :- "<<largestprimefactor;
return 0; 
}

