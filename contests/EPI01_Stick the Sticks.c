#include<stdio.h>
#include<math.h>
int main()
{
    int a[10005]={0};
    a[0]=0;
    int i=1;
    int n;
    scanf("%d",&n);
    for(i=0;2*i+1<=n;i++) {
        a[2*i] = a[i];
        a[2*i+1] = a[i] + 1;
    }
    printf("%d\n",a[2*(i-1)+1]);
    return 0;
}
