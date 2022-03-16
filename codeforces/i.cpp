#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void  Change(string s) {
    for(int i =0 ; i < s.length(); i++) {
        if(s[i] == '1') {
            s[i] = '0';
        }
        else {
            s[i] = '1';
        }
    }
}

int main() {
	// your code goes here
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t ;
	cin >> t ;
	while(t--) {
	    int n ;
	    cin >> n ;
	    vector<int>v ;
	    for(int i = 1;  i <= n ; i++) {
	        if(i <= 2) {
	            if(i == 1) {
	                v.push_back(2);
	            }
	            else {
	                v.push_back(1);
	            }
	        }
	        else if(i > 2 && i < 8) {
	            string s = bitset<3>(i). to_string();
	             Change(s);
	            int number = stoi(s, 0, 2);
	            v.push_back(number);
	        }
	        else {
	           int  count = 4 ;
	            if(floor(log2(i)) == ceil(log2(i))) {
	                count = log2(i);
	            }
	           // string str = bitset<count>(i). to_string();
	            string s = bitset<64> (count).to_string();
	             Change(s);
	            int number = stoi(s, 0, 2);
	            v.push_back(number);
	        }
	    }
	    int count = 0 ;
	    for(int i = 1 ; i <= n ; i++) {
	        count += i ^ v.back();
	        v.erase(v.begin() + (i - 1));
	    }
	    cout << count << "\n";
	}
	return 0;
}
