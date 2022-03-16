#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <bitset>
using namespace std ;

int main() {
    int t;
    cin >> t ;
    while(t--) {
        int size , x ;
        cin >> size >> x ;
        int res[size];
	    string final[size];
	    string temp[size];
	    if(size == 1) 
	    {
	        cout << x << "\n" ;
	    }
	    else if(size == 2) 
	    {
	        cout << x << " " << 0 << "\n" ;
	    }
	    else{
	       if( x <= 10)
           {
             string bs = bitset<4> (x).to_string();
             for(int i = 0 ;  i < size ; i++)
	            {
	                for(int j = 0; j < size ; j++)
	                {
	                    //temp[i][j] = '0' ;
						temp[i].append("0");
	                }
	            }
	           if(size % 2 == 0)
	           {
	           for(int i =0 ; i < size ; i++)
	           {
	               if(i == 0)
	               {
	                   for(int j = 0 ; j < size - 1 ; j++)
	                   {
	                       temp[i][j] = '1' ;
	                   }
	                   
	                   replace( bs.begin() , bs.end() , '1', '0');
	                   
	                   final[i] = temp[i] + bs ;
	               }
	               else 
	               {
	                   temp[i][i -1] = '1' ;
	                   final[i] = temp[i] + bs ;
	               }
	           }
	            
	          }
	            else {
	             for(int i =0 ; i < size ; i++)
	            {
	               if(i == 0)
	               {
	                   for(int j = 0 ; j < size - 1 ; j++)
	                   {
	                       temp[i][j] = '1' ;
	                   }
	                   
	                   //replace( bs3.begin(), bs3.end(), '1', '0');
	                   
	                   final[i] = temp[i] + bs ;
	               }
	               else 
	               {
	                   temp[i][i -1] = '1' ;
	                   final[i] = temp[i] + bs ;
	               }
	           }
	          }
	        
	           for(int k = 0; k < size ; k++)
	           {
	            res[k]  = stoi(final[k], 0, 2);
	            cout << res[k] << " ";
	          }
	           cout << "\n" ;
	       } 
           else if(x <= 100 && x > 10) 
	       {
	            string bs3 = bitset<8> (x).to_string();
	             for(int i = 0 ;  i < size ; i++)
	            {
	                for(int j = 0; j < size ; j++)
	                {
	                    //temp[i][j] = '0' ;
						temp[i].append("0");
	                }
	            }
	           if(size % 2 == 0)
	          {
	           for(int i =0 ; i < size ; i++)
	           {
	               if(i == 0)
	               {
	                   for(int j = 0 ; j < size - 1 ; j++)
	                   {
	                       temp[i][j] = '1' ;
	                   }
	                   
	                   replace( bs3.begin() , bs3.end() , '1', '0');
	                   
	                   final[i] = temp[i] + bs3 ;
	               }
	               else 
	               {
	                   temp[i][i -1] = '1' ;
	                   final[i] = temp[i] + bs3 ;
	               }
	           }
	            
	          }
	            else {
	             for(int i =0 ; i < size ; i++)
	           {
	               if(i == 0)
	               {
	                   for(int j = 0 ; j < size - 1 ; j++)
	                   {
	                       temp[i][j] = '1' ;
	                   }
	                   
	                   //replace( bs3.begin(), bs3.end(), '1', '0');
	                   
	                   final[i] = temp[i] + bs3 ;
	               }
	               else 
	               {
	                   temp[i][i -1] = '1' ;
	                   final[i] = temp[i] + bs3 ;
	               }
	           }
	          }
	        
	          for(int k = 0; k < size ; k++)
	          {
	            res[k]  = stoi(final[k], 0, 2);
	            cout << res[k] << " ";
	          }
	          cout << "\n" ;
	        }
            else if(x > 100 && x <= 1000)
            {
	            string bs3 = bitset<16> (x).to_string();
	             for(int i = 0 ;  i < size ; i++)
	            {
	                for(int j = 0; j < size ; j++)
	                {
	                    //temp[i][j] = '0' ;
						temp[i].append("0");
	                }
	            }
	           if(size % 2 == 0)
	          {
	           for(int i =0 ; i < size ; i++)
	           {
	               if(i == 0)
	               {
	                   for(int j = 0 ; j < size - 1 ; j++)
	                   {
	                       temp[i][j] = '1' ;
	                   }
	                   
	                   replace( bs3.begin() , bs3.end() , '1', '0');
	                   
	                   final[i] = temp[i] + bs3 ;
	               }
	               else 
	               {
	                   temp[i][i -1] = '1' ;
	                   final[i] = temp[i] + bs3 ;
	               }
	           }
	            
	          }
	            else {
	             for(int i =0 ; i < size ; i++)
	           {
	               if(i == 0)
	               {
	                   for(int j = 0 ; j < size - 1 ; j++)
	                   {
	                       temp[i][j] = '1' ;
	                   }
	                   
	                   //replace( bs3.begin(), bs3.end(), '1', '0');
	                   
	                   final[i] = temp[i] + bs3 ;
	               }
	               else 
	               {
	                   temp[i][i -1] = '1' ;
	                   final[i] = temp[i] + bs3 ;
	               }
	           }
	          }
	        
	          for(int k = 0; k < size ; k++)
	          {
	            res[k]  = stoi(final[k], 0, 2);
	            cout << res[k] << " ";
	          }
	          cout << "\n" ;
	        
            }
            else if(x <= 10000 && x > 1000) 
	       {
	            string bs3 = bitset<32> (x).to_string();
	             for(int i = 0 ;  i < size ; i++)
	            {
	                for(int j = 0; j < size ; j++)
	                {
	                    //temp[i][j] = '0' ;
						temp[i].append("0");
	                }
	            }
	           if(size % 2 == 0)
	          {
	           for(int i =0 ; i < size ; i++)
	           {
	               if(i == 0)
	               {
	                   for(int j = 0 ; j < size - 1 ; j++)
	                   {
	                       temp[i][j] = '1' ;
	                   }
	                   
	                   replace( bs3.begin() , bs3.end() , '1', '0');
	                   
	                   final[i] = temp[i] + bs3 ;
	               }
	               else 
	               {
	                   temp[i][i -1] = '1' ;
	                   final[i] = temp[i] + bs3 ;
	               }
	           }
	            
	          }
	            else {
	             for(int i =0 ; i < size ; i++)
	           {
	               if(i == 0)
	               {
	                   for(int j = 0 ; j < size - 1 ; j++)
	                   {
	                       temp[i][j] = '1' ;
	                   }
	                   
	                   //replace( bs3.begin(), bs3.end(), '1', '0');
	                   
	                   final[i] = temp[i] + bs3 ;
	               }
	               else 
	               {
	                   temp[i][i -1] = '1' ;
	                   final[i] = temp[i] + bs3 ;
	               }
	           }
	          }
	        
	          for(int k = 0; k < size ; k++)
	          {
	            res[k]  = stoi(final[k], 0, 2);
	            cout << res[k] << " ";
	          }
	          cout << "\n" ;
	        }

        
        
	    }
    }
}