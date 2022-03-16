#include <iostream>
#include <string>
#include <cmath>
using namespace std ;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int m = 1.6 * pow(10 , 5.0);
    int t ;
    cin >> t ;
    if(t >= 1 ; t <= m)
    {
        for(int n = 0; n < t ; n++)
        {
            int xk , yk , x1 , y1 , x2 , y2 ;
            cin >> xk >> yk ;
            cin >> x1 >> y1 ;
            cin >> x2 >> y2 ;
            
            bool board[8][8] ;
            for(int i = 1 ; i <= 8 ; i++)
            {
                for(int j = 1 ; j <= 8 ; j++)
                {
                    board[i][j] = false ;
                }
            }
            board[xk][yk] = true ;
            board[x1][y1] = true ;
            board[x2][y2] = true ;

            if(xk == 1 && yk == 1)
            {
                int count1 = 0 ;
                int collision = 0 ;
                for(int i = 3 ;  i <= 8 ; i++)
                {
                    if(board[i][2] == true)
                    {
                        count1++ ;
                        collision = i ;
                    }
                }
                if(count1 == 2)
                {
                    cout << "YES" << "\n" ;
                    break ;
                }
                else if(count1 == 1)
                {
                    for(int i = 3 ; i <= 8 ; i++)
                    {
                        for(int j = 3 ; j <= 8 ; j++)
                        {
                           if(board[i][j] == true)
                           {
                               if(i != collision)
                               {
                               cout << "YES" << "\n" ;
                               break ;
                               }
                               else{
                                   cout << "NO" << "\n" ;
                                   break ;
                               }
                               
                           }
                        }
                    }
                }
                else
                {
                int count2 = 0 ;
                int collision2 = 0 ;
                for(int j = 3 ; j <= 8 ; j++)
                {
                    if(board[2][j] == true)
                    {
                        count2++ ;
                        collision2 = j ;
                    }
                }

                if(count2 == 2)
                {
                    cout << "YES" << "\n" ;
                }

                else if(count2 == 1)
                {
                    for(int i = 3 ; i <= 8 ; i++)
                    {
                        for(int j = 3 ; j <= 8 ; j++)
                        {
                            if(board[i][j] == true)
                            {
                                if( j != collision2)
                                {
                                    cout << "YES" << "\n" ;
                                }
                                else 
                                {
                                    cout << "NO" << "\n" ;
                                }
                            }
                        }
                    }
                }
                else 
                {
                    cout << "NO" <<"\n" ;
                }
                }
            }
           else if(xk == 8 && yk == 1)
            {
                int count3 = 0 ;
                int collision3 = 0 ;
                for(int i = 1 ; i<= 6 ; i++)
                {
                    if(board[i][2] == true)
                    {
                        count3++ ;
                        collision3 = i ;
                    }
                }
                if(count3 == 2)
                {
                    cout << "YES" << "\n" ;
                }
                else if(count3 == 1)
                {
                    for(int i = 1 ; i <= 6 ; i++)
                    {
                        for(int j = 3 ; j <= 8 ; j++)
                        {
                           if(board[i][j] == true)
                           {
                               if(i != collision3)
                               {
                               cout << "YES" << "\n" ;
                               }
                               else{
                                   cout << "NO" << "\n" ;
                               }
                               
                           }
                        }
                    }
                }
                else{

                

                int count4 = 0 ;
                int collision4 = 0 ;
                for(int j = 3 ; j <= 8 ; j++)
                {
                    if(board[7][j] == true)
                    {
                        count4++ ;
                        collision4 = j ;
                    }
                }

                if(count4 == 2)
                {
                    cout << "YES" << "\n" ;
                }

                else if(count4 == 1)
                {
                    for(int i = 1 ; i <= 6 ; i++)
                    {
                        for(int j = 3 ; j <= 8 ; j++)
                        {
                            if(board[i][j] == true)
                            {
                                if( j != collision4)
                                {
                                    cout << "YES" << "\n" ;
                                }
                                else 
                                {
                                    cout << "NO" << "\n" ;
                                }
                            }
                        }
                    }
                }
                else 
                {
                    cout << "NO" <<"\n" ;
                }
                }
            }
        }
    }
}