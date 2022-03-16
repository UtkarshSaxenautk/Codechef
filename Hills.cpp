#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std ;


int main() {
	// your code goes here
	
	int t ;
	cin >> t ;
	if(t >= 0 && t <= 2500)
	{
	    for(int i = 0 ; i < t ; i++) 
	    {
	        int nh ;
	        int nv ;
	        cin  >> nh >> nv ;
	        string s = " " ;
	        int total = nh + nv + 2 ;
			if(nh > nv)
			{
				for(int i  = 1 ; i <= total ; i++)
				{
					if(i % 2 == 0)
					{
						s.append("0") ;
					}
					else{
						s.append("1") ;
					}
				}
				s[0] = '0' ;
				s.erase(total);
			}
			else if(nh < nv)
			{
				for(int i  = 1 ; i <= total ; i++)
				{
					if(i % 2 == 0)
					{
						s.append("1");
					}
					else{
						s.append("0") ;
					}
				}
				s[0] = '1' ;
				s.erase(total);
			}
			else{
				for(int i = 1 ; i <= total ;i++)
				{
					if(i % 2 == 0)
					{
						s.append("0") ;
					}
					else 
					{
						s.append("1") ;
					}
				
				}
				   //	s[total] = '1' ;
				   s[0] = '0';
				   s.erase(total);
			}

			cout << s.length() << endl;
			cout << s << endl;
		}
	}
	return 0;
}
     