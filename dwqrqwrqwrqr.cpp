#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long cnt=0;
	for(int i=n-1;i>=0;i--){
		int res=lower_bound(a,a+n,k-a[i])-a; 
		cout << res << endl ; 
		int idx=res-i;
		if(idx>=1) cnt+=idx;
	}
	cout<<cnt<<endl;
} 
//4 5 
//0 1 2 3 
//1 2 3 4  
//4 3 2 1 i

