#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t,n ; 
   cin >> t ; 
    n = t; 
    cin.ignore() ; 
    vector<int> len ; 
    string s ; 
    while(t--) { 
       getline(cin,s) ; 
       stringstream ss(s) ; 
       string tmp ; 
       int y = 0 ;
       while(ss >> tmp) { 
          ++y ; 
	   } 
	   len.push_back(y) ; 
	} 
	int i = 0 ; 
	int cnt = 0 ;  
	bool check = 1 ; 
	vector<int> ans ; 
	while(i < n) { 
	  if(len[i] == 6) { 
	     if(check) {
	     	  ++cnt ; 
	     	  check = 0; 
	     	  ans.push_back(1) ; 
		 } 
		 i += 2  ; 
	  } 
	  else { 
	     check = 1 ; 
	     ++cnt ; 
	     i += 4 ; 
	     ans.push_back(2) ; 
	  }
	} 
	cout << ans.size() << endl ;  
	for(int i : ans) cout << i << endl ; 
	return 0 ;
}
