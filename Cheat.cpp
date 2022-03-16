#include <bits/stdc++.h>
#include <set>
using namespace std ;

int main() {
    int n ;
    cin >> n ;
    int arr[n-1][2];
    for(int i =0 ; i < n -1 ; i++) {
        for(int j =0 ; j < 2 ; j++) {
            cin >> arr[i][j];
        }
    }
    int x ;
    cin >> x ;
    vector<int> v;
    for(int i = 0 ;i < x ; i++) {
        int temp ;
        cin >> temp;
        v.push_back(temp);
    }
    int count =0 ;

    for(int i = 0 ; i < n - 1 ; i++) {
        for(int j =0 ; j < 2 ; j++) {
            if(*find(v.begin(), v.end(), arr[i][j]) == arr[i][j]) {
                break;
            }
            count++ ;
        }
    }
    cout << int(count / 2) << "\n" ;
    
}