#include<bits/stdc++.h> 
using namespace std ;  
long long min1(string x1, string x2) {  
    long long num1,num2 ; 
    for(int i= 0 ; i < x1.size() ; i++) { 
        if(x1[i] == '6') { 
           x1[i] == '5' ; 
		} 
	} 
	for(int i=0; i < x2.size() ; i++) { 
	  if(x2[i] == '6') { 
	      x2[i] == '5' ; 
	  } 
	} 
	return stoll(x1) + stoll(x2) ; 
} 
long long max2(string x1,string x2) {  
   long long num3,num4; 
  for(int i=0; i < x1.size() ; i++) { 
     if(x1[i] == '5') { 
        x1[i] == '6' ; 
	 }  
  } 
  for(int i=0; i < x2.size() ; i++) { 
     if(x2[i] = '5') { 
        x2[i] = '6' ; 
	 } 
  } 
  return stoll(x1) + stoll(x2) ;  
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
        string x1 ;  
        string x2 ; 
        cin >> x1 ; 
        cin >> x2 ; 
		cout << min1(x1,x2) << " " << max2(x1,x2)  << endl ;  
   }
}
