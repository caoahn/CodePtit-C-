#include <bits/stdc++.h>
 using namespace std; 
 int main(){ 
    int t; 
	cin >> t; 
	while(t--){ 
	  string a; 
	  cin >> a; 
	  int n=a.size(); 
	  int ok=0; 
	  for(int i=0;i<n;i++){ 
	     if((a[i+1]-a[i])==1 || (a[i]-a[i+1])==1){ 
		 ok++; 
	} 
} 
   if(ok==n-1) 
      cout << "YES" << endl; 
	  else cout << "NO" << endl; 
	  } 
	}
