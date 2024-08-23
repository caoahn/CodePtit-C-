#include<bits/stdc++.h> 
using namespace std ;  
struct xe { 
   string bien , loai, hd , date; 
    int soghe ; 
}; 
long long val(xe n) { 
    if(n.hd == "OUT") return 0 ; 
    if(n.loai == "Xe_con") { 
      if(n.soghe == 5) return 10000 ; 
      return 15000 ; 
	} 
	if(n.loai == "Xe_tai") return 20000 ; 
	if(n.loai =="Xe_khach") { 
	   if(n.soghe == 29) return 50000 ; 
	   return 70000 ; 
	} 
	return 0 ; 
}
int main() { 
   int n ; 
   cin >> n ; 
   xe a[n] ; 
   for(int i = 0; i < n ; i++) { 
     cin >> a[i].bien >> a[i].loai >> a[i].soghe >> a[i].hd >> a[i].date ;  
   }  
   unordered_map<string,long long> um ; 
   vector<string> vs ; 
   for(int i=0; i < n ; i++) { 
      if(!um[a[i].date]) vs.push_back(a[i].date) ; 
      um[a[i].date] += val(a[i]) ; 
   } 
   for(auto i : vs) { 
      if(um[i]) { 
         cout << i << ": " << um[i] << endl ; 
         um[i] = 0 ; 
	  }
   } 
   return 0 ; 
}
