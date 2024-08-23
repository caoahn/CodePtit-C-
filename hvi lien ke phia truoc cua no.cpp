#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    //faster();
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d", &a[i]);
        if(prev_permutation(a, a + n))  
		 for(int i=0;i<n;i++) printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}
