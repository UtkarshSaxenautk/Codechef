#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int distinct(int* arr, int len , int e)
{
    set<int> S; // declaring a set container using STL
    for (int i = len; i <= e; i++) {
        S.insert(arr[i]); // inserting all elements of the
                          // array into set
    }
    int ans = S.size(); // calculating the size of the set
    return ans;
}
int main() {

	int n , q ;
	cin >> n >> q ;
	int arr[n] ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> arr[i] ;
	}
	
	for(int i =0 ; i < q ; i++)
	{
		int x , y , z ;
		cin >> x ;
		if(x == 1){
			cin >> y >> z ;
			arr[y] = z ;

		}
		else {
			cin >> y ;
			int count = 0 ;

			int i = 1 ;
			while(i <= y)
			{
				int j = i ;
				if(j <= y) {
					count += distinct(arr , i , j) ;
					j++ ;
				}
				else{
                     i++ ;
				}
			}
			cout << count   << "\n" ;

		}
		
	}





}