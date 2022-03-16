#include <iostream>
#include <string>
using namespace std ;



int main()
{
    int t ;
    cin >> t ;
    for(int i =0 ; i < t ; i++)
    {
        int n ;
        string s ;
        cin >> n ;
        
        cin >> s ;
        string s1 = "code" ;
        char s2[] = "chef" ;
      /*  vector<int> f(n);
        vector<int> so(n);
        for(int i =0 ; i < n || found <= n || fo <= n; i++)
        {
            size_t found = s.find(s1 , i);
            f[i] = found ;
            size_t fo = s.find(s2 , i);
            so[i] = fo ;
        }*/
        int m = 0 ;
        size_t foun = s.find(s2 , 0);
        m = foun ;
        int a = 0 ;
        size_t found = s.find(s1);
        a = found ;
        int b = 0 ;
        size_t found1 = s.find(s2 , a + 1);
        b = found1 ;
        int c = 0 ;
        size_t found2 = s.find(s1 , b + 1);
         c = found2 ;
        // cout << a << " " << b << " " << c << endl;
         int d = 0 ;
         size_t found3 = s.find(s2, b + 1);
         
         d = found3 ;

         cout << m << " " << a << " " << b << " " << c << " " << d ;
        
        if(m > a && b > a && b <= m)
        {
            if(c < b)
            {
               // if(d <= b )
               // {
                cout << "AC" << "\n";
               // }
              //  else
               // {
                    cout << "WA" << "\n";
               // }
            }
            else
            {
                cout << "WA" << "\n";
            }
        }
        else
        {
            cout << "WA" << "\n" ;
        }
        
        
      //  int maxcode = *max_element(f.begin() , f,end());
       // int maxchef = *max_element(so.begin() , so.end());
        
       /* if(l > k && k < m)
        {
            cout << "SA" << "\n" ;
        }
        else {
            cout << "WA" << "\n";
        }*/
        
       /* if(maxcode < maxchef)
        {
            cout << "SA" << "\n";
        }
        else
        {
            cout << "WA" << "\n";
        }*/
    }
}