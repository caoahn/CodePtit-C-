#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int n,m ; 
    cin >> n >> m ; 
    long long a[n] ; 
    long long b[m] ; 
     for(long long i=0; i < n ; i++) { 
       cin >> a[i] ; 
	 } 
	 for(long long i=0; i< m ; i++) { 
	   cin >> b[i] ; 
	 }
    sort(a,a+n) ;  
    map<long long,long long> mp ;  
    vector<long long> v;   
    for(int i=0 ; i < n  ;i++) { 
      mp[a[i]]++ ; 
    }  
    int z = -1 ;  
    for(int i=0 ; i < m ; i++) { 
      auto it = lower_bound(a , a+n, b[i])  ;
      int k = *it ; 
      if(k > b[i] ) { 
         --it ;   
         int idx = *it ;  
             if(mp[idx] > 0) { 
             v.push_back(idx) ;  
             mp[idx]-- ;  
         } 
             else { 
                v.push_back(z) ; 
             }
      } 
      else { 
         if(mp[k] > 0) { 
            v.push_back(k) ; 
            mp[k]-- ; 
         } 
         else v.push_back(z) ; 
      }
    } 
    for(int i=0 ; i < v.size() ; i++) { 
      cout << v[i] << endl ; 
    } 
    return 0 ; 
} 

