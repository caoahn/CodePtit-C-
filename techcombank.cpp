#include<bits/stdc++.h> 
using namespace std ; 
struct nganhang { 
    string ten ; 
    long long nhan ; 
    long long chi ; 
};  
void nhap(nganhang &a) { 
   getline(cin,a.ten) ; 
} 
int main() { 
   int  n ; 
   cin >> n  ; 
   cin.ignore() ;  
    string s ; 
    getline(cin,s) ; 
   int q ; 
   cin >> q; 
   int cnt[q] ; 
   for(int i=0;i<q;i++) { 
     cin >> cnt[i] ; 
   } 
   long long sum = 0 ; 
   for(int i=0;i<q;i++) { 
     if(cnt[i] < 0) { 
        sum += abs(cnt[i]) ; 
	 }
   } 
   long long x = 100000000 ;
   if(sum >= x) cout <<"YES" << endl ; 
   else cout <<"NO" << endl ; 
} 
//1
//Nguyen Van Nam
//5
//100000 5000000 -1000000 -2000000 -10000
