#include<bits/stdc++.h> 
using namespace std ; 
class PhanSo { 
    long long tu,mau; 
    public: 
       PhanSo(long long a,long long b) { 
          tu = a; 
          mau = b ; 
	   }  
	   friend istream& operator >> (istream&in,PhanSo &x) ; 
	   friend ostream& operator <<(ostream&out,PhanSo x) ; 
	   void rutgon() ; 
}; 
istream& operator >> (istream&in,PhanSo &x) { 
   in >> x.tu >> x.mau ; 
   return in ;  
} 
ostream& operator <<(ostream&out,PhanSo x) { 
    out << x.tu << "/" << x.mau << endl ;  
    return out ; 
}  
void PhanSo :: rutgon() { 
    long long k = __gcd(tu,mau) ; 
    tu /= k ; 
    mau /= k ; 
} 

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
