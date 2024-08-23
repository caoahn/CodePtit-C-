#include<bits/stdc++.h> 
using namespace std ; 
int p[1000001] = {0} ; 
void sang() { 
  for(int i=0 ; i <= 1000000 ; i++) { 
     p[i] = 1 ; 
  } 
  p[0] = 0 ; 
  p[1] = 0 ; 
  for(int i=2; i<= 1000 ; i++) { 
    if(p[i]) { 
      for(int j=i*i ; j <= 1000000 ;j+= i ) { 
         p[j] = 0 ;
	  }
	}
  }
} 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
    int l,r ; 
    cin >> l >> r  ; 
	int cnt = 0 ; 
	sang() ;  
    for(int i=l;i<=r;i++) { 
      if(p[i]) { 
         ++cnt ; 
	  }
	} 
	cout << cnt << endl ; 
  }
}
