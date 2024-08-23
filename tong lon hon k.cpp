#include<bits/stdc++.h> 
using namespace std ;  
int cou(int arr[], int n, int k) {
    sort(arr, arr + n);
    int count = 0;
    int left = 0, right = n - 1;
    while (left < right) {
        if (arr[left] + arr[right] < k) {
            count += (right - left);
            left++;
        } else {
            right--;
        }
    }
    return count;
}
int main() { 
   int n,k ; 
   cin >> n >> k  ; 
   int a[n] ;  
   int cnt = 0 ; 
   for(int i=0; i<n;i++)  { 
      cin >> a[i] ; 
   } 
   cout << cou(a,n,k) << endl ; 
} 
//4 6
//4 3 2 1

