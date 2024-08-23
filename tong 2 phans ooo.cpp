#include<bits/stdc++.h> 
using namespace std ;  
class PhanSo { 
   int tu,mau ; 
   public : 
      PhanSo(int a,int b) { 
        tu = a ; 
        mau = b ; 	
	  } 
	friend istream& operator >> (istream&in,PhanSo &a) ; 
	friend ostream& operator << (ostream&out,PhanSo a) ; 
	friend PhanSo operator + (PhanSo a,PhanSo b) ; 
}; 
void rutgon(PhanSo &a) { 
   int uc = __gcd(a.tu,a.mau) ; 
   a.tu /= uc ; 
   a.mau /= uc ; 
}
istream& operator >> (istream&in,PhanSo &a) { 
   in >> a.tu >> a.mau ; 
   return in ; 
} 
ostream& operator << (ostream&out,PhanSo a) { 
   out << a.tu <<"/" << a.mau << endl ;
   return out;  
} 
PhanSo operator + (PhanSo a,PhanSo b) { 
  PhanSo c(1,1) ; 
  int ucln = __gcd(a.mau,b.mau) ; 
  int bc = a.mau/ucln * b.mau; 
  c.tu = a.tu*bc/a.mau + b.tu*bc/b.mau ; 
  c.mau = bc ; 
  rutgon(c) ; 
  return c ;  
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A(1,1);
		PhanSo B(1,1);
		PhanSo C(1,1); 
	    cin >> A >> B; 
	    C = A + B ; 
		cout << C<< endl ; 
	}
}
