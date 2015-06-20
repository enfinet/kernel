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
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[n],i;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		qsort(a,n,sizeof(int),compare);
		int x=1,y=a[0],max=1,num=a[0],j;
		for(j=1;j<n;j++) {
			if(y==a[j]) {
				x++;
				if(max<x) {
					max=x;
					num=y;
				}
			} else {
				x=1;
				y=a[j];
			}
		}
		printf("%d %d\n",num,max);
	}
	return 0;
}
