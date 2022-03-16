#include <vector>
#include <iostream>
#include <algorithm>
using namespace std ;


int main() {
    int t ;
    cin >> t ;
    while(t--) {
    int n ;
    long long x ;
    cin >> n >> x ;
    vector <long long> v ;
    for(int i =0 ; i < n ; i++) {
        long long temp ;
        cin >> temp ;
        v.push_back(temp) ;
    }
    int res = 0 ;
    
    for(int i =0 ; i < n ; i++) {
        long long max = *max_element(v.begin() , v.end()) ;
        res += max ;
        
        if(res >= x) {
            cout << i + 1 << "\n" ;
            break ;
        }
    }
    if(res < x) {
        cout << -1 << "\n" ;
    }
    
    
    }
}