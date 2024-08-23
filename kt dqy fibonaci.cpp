#include<bits/stdc++.h> 
using namespace std ; 
long long fb[95] ; 
void fibo() { 
    fb[0] = 0 ; 
    fb[1] = 1 ; 
    for(int i=2 ; i <= 92 ;i++) { 
       fb[i] = fb[i-1] + fb[i-2] ; 
	}
} 
int check(int n) { 
  for(int i=0 ; i<= 92 ;i++) { 
    if( n == fb[i]) { 
      return 1 ; 
      break ; 
	}
  } 
  return 0 ; 
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
     int  n ; 
     cin >> n ; 
     int a[n] ; 
     for(int &x : a) cin >> x ; 
     fibo() ; 
     vector<int> v ;  
     for(int i=0;i<n;i++) { 
       if(check(a[i])) { 
         v.push_back(a[i]) ; 
	   }
	 } 
	 for(int x : v) { 
	   cout << x << " " ;  
	 } 
	 cout << endl ; 
   }
}
