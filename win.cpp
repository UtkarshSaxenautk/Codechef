#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	for(int i =0 ; i < t ; i++)
	{
	    int a , b , c , d ;
	    int res = 0 ;
	    cin >> a >> b >> c >> d ;
	    if(a >= b)
	    {
	        b += c ;
	        if(a >= b)
	        {
	            b +=d ;
	            if(a >= b)
	            {
	                 cout << "N" << "\n" ;
	            }
	            else{
	                 cout << "S" << "\n" ;
	            }
	        }
	        else
	        {
	            a += d ;
	            if(a >= b)
	            {
	                 cout << "N" << "\n" ;
	            }
	            else{
	                 cout << "S" << "\n" ;
	            }
	            
	        }
	    }
	    else
	    {
	        a += c ;
	        if(a >= b)
	        {
	            b +=d ;
	            if(a >= b)
	            {
	                cout << "N" << "\n" ;
	            }
	            else{
	                cout << "S" << "\n" ;
	            }
	        }
	        else
	        {
	            a += d ;
	            if(a >= b)
	            {
	                 cout << "N" << "\n" ;
	            }
	            else{
	                 cout << "S" << "\n" ;
	            }
	            
	        }
	       
	    }
        
	}
	return 0;
}
