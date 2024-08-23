#include<bits/stdc++.h> 
using namespace std ;  
bool isMountain(vector<int> v, int left, int right) { 
 bool checkGiam = false;
 for (int i = left; i < right; i++) { 
    if (v[i] >= v[i + 1]) { 
	  checkGiam = true; 
   } 
   else { 
     if (checkGiam) { 
   return false; 
       } 
     } 
} 
   return true; 
}
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     int n ; 
     cin >> n ; 
	 vector<int> v(n) ; 
	 for(int &x : v) cin >> x ; 
	 int l,r ; 
	 cin >> l >> r ; 
	 if(isMountain(v,l,r) ) cout << "Yes" << endl ; 
	 else cout <<"No" << endl ; 
  }
}
