#include<stdio.h>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
    int t;
    scanf("%d",&t);
    int a[t+1],i;
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    qsort(a,t,sizeof(int),compare);
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
