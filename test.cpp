#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t ;
	cin >> t ;
	while(t--) {
	    int n , x ;
	    cin >> n >> x ;
	    string s ;
	    cin >> s ;
	    vector<int> index ;
	    for(int i = 0 ; i < s.length() ; i++) {
	        if(s[i] == '1') {
	            index.push_back(i);
	        }
	    }
	    vector<int> diff ;
	    for(int i =0 ; i < index.size() ; i++) {
	       // if(i == 0) {
	        //    diff.push_back(index[i + 1] - index[0]);
	        
	       // else {
               if(i == index.size() -1) {
                   diff.push_back(0);
               }
	            diff.push_back(index[i + 1] - index[i] );
	       // }
	    }
	    int maxElementIndex = max_element(diff. begin(),diff. end()) - diff. begin();
	    int temp = index[maxElementIndex];
	    s[temp] = '0';
	    vector<int> holiday ;
	    int count = 0 ;
	    for(int i =0 ; i < s.length(); i++) {
	        if(s[i] == '1') {
	            holiday.push_back(count);
	            count = 0 ;
	        }
	        else {
	            count++ ;
	        }
	    }
	    int a = *max_element(holiday.begin() , holiday.end());
	    cout << a / x << "\n";
	}
	return 0;
}
