#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--) {
	    int n , x , y ;
	    cin >> n >> x >> y ;
	    int pollution = 0 ;
	    int pbybus =0 ;
	    int pbycar = 0 ;
	    int pbyboth = 0 ;
	    int no_of_bus = ceil(n / 100);
	    int no_of_cars = ceil(n / 4) ;
	    pbybus = no_of_bus * x ;
	    pbycar = no_of_cars * y ;
	    int numberr = n % 100 ;
	    int bus_req = (n - numberr) / 100 ;
	    int car_req = numberr ;
	    pbyboth = (bus_req * x) + (car_req * y);
	    
	    cout << min(pbyboth , min(pbycar , pbybus)) << "\n";
	    
	}
	return 0;
}
