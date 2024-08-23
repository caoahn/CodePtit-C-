#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int t  ; 
    cin >> t ; 
    while(t--) { 
       int n ; 
       cin >> n ; 
       int a[n] ; 
       for(int &x : a) cin >> x ; 
        set<int> se ; 
        for(int i=0;  i < n ; i++) { 
           while(a[i] != 0 ) { 
                int z = a[i] % 10 ; 
				 se.insert(z) ; 
                a[i] /= 10 ; 
		   }
		} 
		for(auto x : se) { 
		  cout << x << " "  ; 
		} 
		cout << endl ; 
	}
}
