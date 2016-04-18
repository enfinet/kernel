#include<stdio.h>
int b[502][502];
int main()
{
    int m,n;
    scanf("%d,%d",&m,&n);
    long long a[m+1][n+1];
    int i,j;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++) {
            scanf("%lld,",&a[i][j]);
            if(a[i][j]<0)b[i][j]=1;
        }
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++)
            if(b[i][j]) {
                if(i-1>0 && !b[i-1][j])    a[i-1][j]+=a[i][j];
                if(j-1>0 && !b[i][j-1])    a[i][j-1]+=a[i][j];
                if(i+1<=m && !b[i+1][j])   a[i+1][j]+=a[i][j];
                if(j+1<=n && !b[i][j+1])   a[i][j+1]+=a[i][j];
                if(i-1>0 && j-1>0 && !b[i-1][j-1]) a[i-1][j-1]+=a[i][j];
                if(i-1>0 && j+1<=n && !b[i-1][j+1]) a[i-1][j+1]+=a[i][j];
                if(i+1<=m && j-1>0 && !b[i+1][j-1]) a[i+1][j-1]+=a[i][j];
                if(i+1<=m && j<=n && !b[i+1][j+1]) a[i+1][j+1]+=a[i][j];
                a[i][j]=-100000000;
            }
    }
    a[1][1]=0;
    a[m][n]=0;
    j=1;
    for(i=2;i<=m;i++)
        a[i][j]+=a[i-1][j];
    i=1;
    for(j=2;j<=n;j++)
        a[i][j]+=a[i][j-1];
    for(i=2;i<=m;i++)
        for(j=2;j<=n;j++) {
            if(a[i-1][j]<a[i][j-1])a[i][j]+=a[i][j-1];
            else a[i][j]+=a[i-1][j];
        }
    printf("%lld\n",a[m][n]);
    /*for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }*/
    return 0;
}
