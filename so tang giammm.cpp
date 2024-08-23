#include<bits/stdc++.h>
using namespace std;

int tang(int n){
	int cnt=10;
	while(n>0){
		if(cnt<=(n%10)){
			return 0;
		}
		cnt=n%10;
		n/=10;
	}
	return 1;
}
int giam(int n){
	int cnt=-1;
	while(n>0){
		if(cnt>=(n%10)){
			return 0;
		}
		cnt=n%10;
		n/=10;
	}
	return 1;
}

int nt(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	long long dau=pow(10,n-1);
	long long cuoi=pow(10,n);
	int cnt=0;
	for(long long i=dau;i<cuoi;i++){
		if(tang(i)||giam(i)){
			if(nt(i)) cnt++;
		}
	}
	cout<<cnt<<endl;}
}
