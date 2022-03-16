#include <iostream>
#include <bitset>
#include <vector>
#include <bits/stdc++.h>
using namespace std ;


int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int x , s ;
        cin >> x >> s ;
       
        vector<int>v ;
        for(int i = 0 ; i < x ; i++)
       {
         if((x | i) == x) {
           v.push_back(i);
       }
       }
         sort(v.begin(), v.end(), greater<int>());
        if(x > s || (x % 2 == 0 && s % 2 != 0)) {
            cout << -1 << "\n" ;
        }
        else if(s % x == 0) {
            cout << s / x << "\n" ;
        }
        else {
            int c =0 ;
           for(int i = 0 ; i < v.size() ; i++)
           {
               if(s % v[i] == 0) {
                   cout << s / v[i] << "\n" ;
                   break ;
               }
               else {
                   if(s > 2 * v[i]) {
                       int diff = s - 2 * v[i] ;
                       for(int j = i ; j < v.size() ; j++)
                       {
                           if(diff % v[j] == 0) {
                               cout << 2 + (diff / v[j]) << "\n" ;
                               c++ ;
                               break ;
                               
                           }
                       }
                       if(c == 1) {
                           break ;
                       }
                   }
               }
           }
        }
    }
}