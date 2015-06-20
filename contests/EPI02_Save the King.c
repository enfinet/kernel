#include<stdio.h>
int a[20000];
int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    a[1]=1;
    for(i=1;i<=6000;i++) {
        a[2*i] = 2*a[i]-1;
        a[2*i+1] = 2*a[i]+1;
    }
    printf("%d\n",a[n]);
    return 0;
}
