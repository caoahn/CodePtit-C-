#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
ll gcd(ll a,ll b){ 
   while(a!=0&&b!=0){ 
     if(a>b) a=a%b; 
	 else b=b%a; 
	} 
return a+b; 
} 
 int main(){ 
  int t; 
  cin>>t; 
   while(t--){ 
      ll a,x,y; 
	  cin>>a>>x>>y; 
	  ll d=gcd(x,y); 
	  for(int i=1;i<=d;i++){ 
	  cout<<a; 
	} 
	cout<<endl; 
	} 
}
