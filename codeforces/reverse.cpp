#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t ;
	while(t--)
	{
	    int n ;
	    cin >> n ; 
	    stringstream ss ;
	    ss << n ;
	    string s ;
	    ss >> s ;
        reverse(s.begin() , s.end());
        int count = 0 ;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] != '0')
            {
                break ;
            }
            count++ ;
        }

        for(int j = count ; j < s.length() ; j++)
        {
            cout << s[j] ;
        }
        cout << "\n" ;
	   
	}
	return 0;
}
