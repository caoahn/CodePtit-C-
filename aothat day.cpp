#include<bits/stdc++.h> 
using namespace std ; 
class phanso { 
   int tu,mau ;  
    public :
   phanso(int a,int b) { 
      tu = a; 
      mau = b ; 
   } 
   friend istream& operator >> (istream&in,phanso &x) ; 
   friend ostream& operator << (ostream&out,phanso x) ; 
   friend phanso operator + (phanso a,phanso b) ;
   friend phanso rutgon(phanso &a) ;   
};   
phanso rutgon(phanso &a) { 
   phanso d(1,1) ;  
   int uc = __gcd(a.tu,a.mau) ; 
   d.tu = a.tu/uc ; 
   d.mau = a.mau/uc ; 
   return d ;  
}
 istream& operator >> (istream&in,phanso &x) { 
    in >> x.tu >> x.mau ; 
    return in ; 
} 
 ostream& operator <<(ostream&out,phanso x) { 
   out << x.tu <<"/"<<x.mau <<endl ; 
   return out ;  
} 
phanso operator + (phanso a,phanso b) {  
    phanso c(1,1) ;  
    int k = __gcd(a.mau,b.mau) ; 
    int bc = a.mau*b.mau / k ; 
    c.tu = a.tu*bc/a.mau + b.tu*bc/b.mau ; 
    c.mau = bc; 
    rutgon(c) ; 
    return c ; 
}
int main() {
	phanso p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
