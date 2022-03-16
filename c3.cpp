#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int countDistinct(int arr[], int m ,  int n)
{
    // First sort the array so that all
    // occurrences become consecutive
    sort(arr + m, arr + n);
 
    // Traverse the sorted array
    int res = 0;
    for (int i = m; i <= n; i++) {
 
        // Move the index ahead while
        // there are duplicates
        while (i <= n - 1 && arr[i] == arr[i + 1])
            i++;
 
        res++;
    }
 
    return res;
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

			for(int i = 1 ; i <= y ; i++)
			{
				for(int j = 1 ; j <= y ; j++)
				
				{
					if(i <= j)
					{
						count += countDistinct(arr , i , j);
						
					}
				}
			}
			cout << count   << "\n" ;

		}
		
	}





}