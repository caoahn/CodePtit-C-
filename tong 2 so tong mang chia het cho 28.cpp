#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int n ; 
  cin >> n ; 
  int a[n] ;  
  map<int,int> mp ; 
  for(int i=0; i <n;i++) { 
    cin >> a[i] ;  
    mp[a[i] % 28]++ ; 
  } 
  long long ans = 0 ;  
  for(int i=0 ; i<= 27 ; i++) { 
    if( i == 0 || i == 14) { 
       ans += mp[i]*(mp[i]-1)/ 2 ; 
       mp[i] = 0 ; 
	} 
	else { 
	   ans += mp[i]*mp[28-i] ;  
	   mp[i] = 0 ; 
	   mp[28-i] = 0  ; 
	}
  }
    cout << ans << endl ; 
}
