#include<bits/stdc++.h> 
using namespace std ;
int main() { 
  int n,m ; 
  cin >> n >> m ; 
  int a[n] ; 
  map<int,int> mp ; 
  set<int> se  ;    
  vector<int> v ; 
  for(int i=0;i<n;i++) { 
    cin >> a[i] ;  
    mp[a[i]]++ ; 
    se.insert(a[i]) ; 
  } 
  int ok = 0 ; 
  for(int i=0;i<n-1;i++) { 
    if(mp[a[i]] != mp[a[i+1]]) { 
       ok = 1 ; 
       break ; 
	}
  }   
  if(ok == 1) {  
      int max1 = 0 ; 
    int max2 = 0  ;
     for(auto x : se) { 
       v.push_back(x) ; 
	 } 
	 for(int i=0;i<v.size() ; i++) { 
	   if(mp[v[i]] >= max1) { 
	      max2 = max1 ; 
	      max1 = mp[v[i]] ; 
	   } 
	   else if(mp[v[i]] >= max2) { 
	       max2 = mp[v[i]] ; 
	   }
	 } 
	 for( int i=0;i<v.size();i++ ) { 
	   if(mp[v[i]] == max2) cout << v[i] << endl ; 
	 } 
  } 
  else cout <<"NONE" << endl ;  
}
