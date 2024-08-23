#include<bits/stdc++.h> 
using namespace std ; 
struct PhanSo { 
    int tu ; 
    int mau; 
};   
void rutgon(PhanSo &A) { 
    int l = __gcd(A.tu,A.mau) ; 
    A.tu = A.tu / l ;  
    A.mau = A.mau / l ; 
}  
void process (PhanSo &A, PhanSo &B) {   
    PhanSo C ; 
    int k = A.mau * B.mau ; 
    int r = __gcd(A.mau,B.mau) ;  
    int bc = k/r ; 
    C.tu = A.tu*bc/A.mau + B.tu*bc/B.mau ; 
    C.mau = bc ; 
    rutgon(C) ; 
    C.tu = pow(C.tu,2) ; 
    C.mau= pow(C.mau,2) ; 
    rutgon(C) ; 
    cout << C.tu << "/" << C.mau << " " ; 
    PhanSo d ; 
    d.tu = A.tu* B.tu * C.tu ; 
    d.mau = A.mau * B.mau * C.mau ; 
    rutgon(d) ; 
    cout << d.tu <<"/" << d.mau ;  
    cout << endl ; 
}
int main() { 
    int t ; 
    cin >> t ; 
    while(t--) { 
       PhanSo A ; 
       PhanSo B; 
       cin >> A.tu >> A.mau >> B.tu >> B.mau ; 
       process(A,B) ; 
	}
}
