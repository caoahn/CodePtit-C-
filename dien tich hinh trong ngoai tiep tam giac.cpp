#include<bits/stdc++.h> 
#define PI 3.141592653589793238
using namespace std ; 
struct point { 
   int x,y ; 
};  
double kc(point a,point b) { 
   return sqrt(pow((a.x - b.x),2) + pow((a.y-b.y),2)) ; 
} 
void nhap(point &a) { 
  cin >> a.x >> a.y ; 
} 
void check(point a, point b, point c) { 
    double ab = kc(a,b) ; 
    double ac = kc(a,c) ; 
    double bc = kc(b,c) ; 
    if(ab + bc <= ac || ab + ac <= bc || bc + ac <= ab) { 
       cout << "INVALID" << endl ; return ; 
	} 
	double p = (ab + ac + bc) / 2 ; 
	double s = sqrt(p*(p-ab)*(p-ac)*(p-bc)) ; 
	double su = (ab*bc*ac)/ (4*s) ;  
	cout << fixed << setprecision(3) << su*su*PI << endl ; 
}
int main () { 
    int t ; 
    cin >> t ; 
    while(t--) { 
      point a ; 
      point b ; 
      point c ; 
      nhap(a) ; 
      nhap(b) ; 
      nhap(c) ;  
      check(a,b,c) ; 
	} 
	return 0 ;
}
