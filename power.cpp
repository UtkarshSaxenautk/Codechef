#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arraySum(int a[], int n) 
{
    int initial_sum  = 0; 
    return accumulate(a, a+n, initial_sum);
}
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--) {
	    int n ;
	    cin >> n ;
	    int arr[n] ;
        for(int i = 0 ; i < n ; i++) {
            cin >> arr[i] ;
        }
        int sum = arraySum(arr , n);
        if(isPowerOfTwo(sum)) {
            cout << 0 << "\n" ;
        }
        else {
            int diff = pow(2 ,ceil(log2(sum))) - sum ;
            int p = 0 ;
            int s = 0 ;
            int i=0 ; 
            for( i =0 ; i < n ; i++) {
                s += arr[i] ;
                if(s == diff) {
                    break ;
                }
            }
            p = i ;
            cout << 1 << "\n" ;
            cout << p + 1 << " " << 2 << "\n" ;
            for(int j = 0 ; j <= p ; j++) {
                cout << j + 1 << " " ;
            }
            cout << "\n";
        }
	}
	return 0;
}
