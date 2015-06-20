#include<stdio.h>
int a[1100][1100];
#define mod 1000000007
int main()
{
    int i,j;
    a[1][1]=1;
    for(i=2;i<=1001;i++) {
        for(j=1;j<=i;j++) {
            if(j==1)a[i][j]=a[i-1][i-1]%mod;
            else a[i][j]=(a[i-1][j-1]+a[i][j-1])%mod;
        }
    }
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        printf("%d\n",a[n+1][1]);
    }
    return 0;
}
