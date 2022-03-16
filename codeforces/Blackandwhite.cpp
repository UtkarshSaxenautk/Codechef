#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std ;
 


bool check(char matrix[50][50] , int row , int column ,char b) {
    for(int i =0 ; i < row ; i++) {
        for(int j=0 ; j < column ; j++) {
           if(matrix[i][j] == b) {
               return true ;
               break ;
           }
        }
    }
    return false ;
}

template <typename T>
bool contains(vector<T> vec, T  elem)
{
    bool result = false;
    if( find(vec.begin(), vec.end(), elem) != vec.end() )
    {
        result = true;
    }
    return result;
}

int main(){
    int t ;
    cin >> t ;
    while(t--) {
        char matrix[50][50] ;

        int row , column , z ,c , x , y;
        cin >> row >> column >> z >> c ;
        x = z - 1 ;
        y = c - 1 ;
       // char matrix[row][column] ;
        int i , j ;
        for( i = 0 ; i < row ; i++) {
           for(j = 0 ; j < column ; j++) {
               cin >> matrix[i][j] ;
           }
        }

        if(matrix[x][y] == 'B') {
            cout << 0 << "\n" ;
        }
        else if(check(matrix ,  row , column , 'B') == false) {
            cout << -1 << "\n" ;
        }
        else {
            int steps1 = 0 ;
            int steps2 = 0 ;
            int steps3 = 0 ;
            int steps4 = 0 ;
            vector<int>v1 ;
            vector<int>v2 ;
            for( i =0 ; i < row ; i++ ) {
                for( j =0 ; j < column ; j++) {
                    if(matrix[i][j] == 'B') {
                        v1.push_back(i);
                        v2.push_back(j);
                    }
                }
            }

            if(contains(v1 , x) == true  || contains(v2 , y) == true  )
            {
                cout << 0 << "\n";
            }
            else {
                for(int k = x - 1; k >= 0 ; k++) {
                    if(contains(v1 , k) == true){
                         break ;
                     }
                     steps1++ ;
                }
                for(int k = x + 1 ; k < row ; k++) {
                     if(contains(v1 , k) == true){
                         break ;
                     }
                     steps2++ ;
                }
                for(int k = y + 1 ; k < column ; k++) {
                     if(contains(v2 , k) == true){
                         break ;
                     }
                     steps3++ ;
                }
                for(int k = y - 1 ; k >= 0 ; k++) {
                     if(contains(v2 , k) == true){
                         break ;
                     }
                     steps4++ ;
                }

                cout << max(max(steps1 , steps2) , max(steps3 , steps4)) << "\n";

            }

        }
        
    }
}