#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   cin.ignore() ; 
   while(t--) { 
      string s ; 
      getline(cin,s) ; 
      string ans ="" ; 
      for(char i:s) { 
         if(isdigit(i)) ans += i ; 
  }
         if(ans[0] == '8' && ans[1] =='4') { 
            ans.erase(ans.begin()) ; 
         
		 }
	 while(ans.size() < 10) ans = "0" + ans ; 
	 cout << ans << endl ; 
   } 
   return 0 ; 
}
