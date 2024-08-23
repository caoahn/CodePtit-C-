#include<bits/stdc++.h> 
using namespace std ; 
int test(long long m[],int n){
    for (int i = n - 1; i >= 2; i--) {
        int l = 0;
        int r = i - 1;
        while (l < r) {
			if (m[l] + m[r] == m[i])
				return 1;
            (m[l] + m[r] < m[i]) ? l++ : r--;
        }
    }
	return 0;
}
int main() {  
   int t ; 
   cin >> t ; 
   while(t--) { 
     int n ; 
	 cin >> n ; 
	 long long  a[n] ; 
	 int ok = 0;  
	 for(long long &x : a) cin >> x ; 
	 for(int i=0; i < n ; i++) {  
	    a[i]*= a[i] ; 
	 } 
	 sort(a,a+n) ; 
	 if(test(a,n)) cout << "YES" << endl ; 
	 else cout << "NO" << endl ; 
   } 
   return 0 ; 
}
