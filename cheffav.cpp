#include <iostream>
#include <bitset>
#include <vector>
#include <bits/stdc++.h>
using namespace std ;


int Count(int S[], int m, int n)
{
    vector<vector<int> > table(
        m + 1,
        vector<int>(
            n + 1, 0));
 
    // Loop to initialize the array
    // as infinite in the row 0
    for (int i = 1; i <= n; i++) {
        table[0][i] = INT_MAX - 1;
    }
 
    // Loop to find the solution
    // by pre-computation for the
    // sequence
    for (int i = 1; i <= m; i++) {
 
        for (int j = 1; j <= n; j++) {
            if (S[i - 1] > j) {
                table[i][j]
                    = table[i - 1][j];
            }
            else {
 
                // Minimum possible
                // for the previous
                // minimum value
                // of the sequence
                table[i][j]
                    = min(
                        table[i - 1][j],
                        table[i][j - S[i - 1]] + 1);
            }
        }
    }
    return table[m][n];
}

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int x , s ;
        cin >> x >> s ;
       
        vector<int>v ;
        if((s % 2 != 0 && x % 2 == 0) || (x == 0)) {
            cout << "-1" << "\n" ;
        }
        else if(x == 1) {
            cout << s << "\n" ;
        }
        else if(x < s) {
        int i = 0 ;
        for( i = x ; i > 0 ; i--)
        {
         if((x | i) == x) 
         {
           v.push_back(i);
         }
        }
       
       int temp = s % x ;
       if(temp != 0) {
       int u = 0 ;
        sort(v.begin(), v.end(), greater<int>());
        for( i = 0 ; i < v.size() ; i++) {
            if(temp % v[i] == 0) {
                u = v[i] ;
                break ;
            }
        }
        if(u != 0) {
         cout << floor(s / x) + (temp / u) << "\n" ;
        }else {
           cout << -1 << "\n" ;

        }
       }
       else {
           cout << s / x << "\n" ;
       }
       
       
       /* int arr[v.size()];
        for(int i=0 ; i <v.size() ; i++) {
            arr[i] = v[i];
        }
        int m = sizeof(arr) / sizeof(arr[0]);
        cout << Count(arr, m, s) << "\n" ;
       // cout << Count(v , v.size() , s);
       }*/
      /* int temp = s % x ;
        int a = 0 ;
         sort(v.begin(), v.end(), greater<int>());
         for(int i = 0 ; i < v.size() ; i++) {
            if(v[i] <= temp) {
                a = v[i];
                break ;
            }
        }
        int z = s % a ;
        int b = 0 ;
        for(int i =0 ; i < v.size() ; i++) {
            if(v[i] <= z && z % v[i] == 0) {
                b = v[i] ;
                break ;
            }
        }
       
        
            cout << floor(s / a) + floor(z / b) << "\n" ;*/
        }
        else if(x > s) {
            cout << -1 << "\n" ;
        }
        else {
                        cout << -1 << "\n" ;

        }
       
    }
}
