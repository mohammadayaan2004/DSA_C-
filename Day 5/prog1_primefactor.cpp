// <<<<<<< HEAD
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() 
// { 
// 	int n ;
//     cout<<"Enter number :- ";
//     cin>>n;
// 	for (int i = 2; i <= sqrt(n) ; i++) 
// 	{ 
// 		while (n % i == 0) 
// 		{ 
// 			n = n / i; 
// 			cout << i << " "; 
// 		} 
// 	} 
//     if(n!=1){
//         cout<<n;
//     }
// 	return 0; 
// }
// //=======
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	int n ;
    cout<<"Enter number :- ";
    cin>>n;
	for (int i = 2; i <= sqrt(n) ; i++) 
	{ 
		while (n % i == 0) 
		{ 
			n = n / i; 
			cout << i << " "; 
		} 
	} 
    if(n!=1){
        cout<<n;
    }
	return 0; 
}

