#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  cin.ignore() ; 
  while(t--) { 
     string s ; 
     getline(cin,s) ; 
     stringstream ss(s) ; 
     string tmp ;  
     int cnt1 = 0 ; 
     int cnt2= 0 ; 
     int cnt = 0 ; 
     while(ss >> tmp) { 
         ++cnt ; 
         if( (tmp[tmp.size() - 1] -'0' ) % 2 == 0) { 
            ++cnt1; 
		 } 
		 else ++cnt2 ; 
	 } 
	 if( ((cnt1 > cnt2 ) && (cnt%2==0) ) || ((cnt1 < cnt2) && (cnt % 2 !=0) )) { 
	   cout <<"YES" << endl; 
	 } 
	 else cout <<"NO" << endl ; 
  } 
  return 0 ; 
 }
