#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int n ; 
	cin >> n ; 
	int a[n] ; 
	for(int &x : a) cin >> x ; 
	map<int,int> mp ; 
	for(int i=0; i < n ; i++) { 
	  mp[a[i]]-- ; 
	} 
	for(int i=0; i < n ; i++) { 
	  cout << mp[a[i]] <<" " ; 
	} 
}
