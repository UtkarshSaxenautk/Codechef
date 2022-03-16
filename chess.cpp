#include <iostream>
#include <cmath>
using namespace std ;


int main()
{
    int maxT = 1.6 * pow(10 , 5.0);
    int t ;
    cin>> t ;
    if(t >= 0 ; t <= maxT)
    {
        for(int i = 0 ; i < t ; i++)
        {
        int xk , yk , x1 , y1 , x2 , y2 ;
        cin >> xk >> yk ;
        cin >> x1 >> y1 ;
        cin >> x2 >> y2 ;
        bool chess[8][8] ;
        for(int i = 1 ; i <= 8 ; i++)
        {
            for(int j = 1 ; j <= 8 ; j++)
            {
                chess[i][i] = false ;
            }
        }
        
        chess[xk][yk] = true ;
        chess[x1][y1] = true ;
        chess[x2][y2] = true ;
        int count1 = 0 ;
        int count2 = 0 ;

        if(xk == yk)
        {
            bool temp1[2][8] ; 
            bool temp2[8][2] ;
            bool temp3[2][8] ;
            bool temp4[2][8] ;
            for(int i = 1 ; i <= 2 ; i++)
            {
                for(int j = 1 ; j <= 8 ; j++)
                {
                   temp1[i][j] = chess[i][j] ;
                }
            }
            for(int i = 1; i <= 8 ; i++)
            {
                for(int j = 1 ; j <= 2 ; j++)
                {
                    temp2[i][j] = chess[i][j] ;
                }
            }
            for(int i = 7 ; i <= 8 ; i++ )
            {
                for(int j = 1; j <= 8 ; j++)
                {
                    temp3[i][j] = chess[i][j] ;
                }
            }
            for(int i = 1 ; i <= 8 ; i++)
            {
                for(int j = 7 ; j <= 8 ; j++)
                {
                    temp4[i][j] = chess[i][j] ;
                }
            }

            
        }
         
        if(count1 == 2 || count2 == 2)
            {
                cout << "YES" << endl;
            }
            
        }
        else
        {
            cout << "NO" << endl;
        }
        }
    }
}