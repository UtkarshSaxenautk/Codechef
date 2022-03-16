#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int c  , n ;
vector<int> v ; 
void extrema()
{
    for(int i = 1 ; i < n - 1 ; i++)
    {
        if(v[i - 1] < v[i] and v[i] > v[i + 1])
        {
            c++ ;
        }
        if(v[i - 1] > v[i] and v[i] < v[i + 1])
        {
            c++ ;
        }
    }
}

void insertion(int i =0)
{
   if(i == n)
   {
       extrema();
       return ;
   }
   
   for(auto x : {0 , 1, 2})
   {
       v[i] = x ;
       insertion(i + 1);
   }

}


int main()
{
    int t ;
    cin >> t ;
    for(int i = 0 ; i < t ; i++)
    {
        cin >> n ;
        c = 0 ;
        v.resize(n);
        insertion();
        cout << c << "\n" ;
    }
    return 0 ;
}



