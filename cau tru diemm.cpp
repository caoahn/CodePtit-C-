#include<bits/stdc++.h> 
using namespace std ;  
struct point{ 
   double x1,y1,x2,y2 ; 
   double z ; 
};
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
       point p ; 
	   cin >> p.x1 >> p.y1 >> p.x2 >> p.y2 ; 
	    p.z = sqrt(pow( (p.x2-p.x1),2) + pow((p.y2-p.y1),2)) ;  
	   cout << fixed <<setprecision(4) << p.z << endl ;  
   }
}
