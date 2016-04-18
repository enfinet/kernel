#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int min,diff=0,a;
		scanf("%d",&a);
		min=a;
		n--;
		while(n--) {
			int b;
			scanf("%d",&b);
			if(min>b)min=b;
			if(b-min > diff)diff=b-min;
		}
		if(diff>0)
			printf("%d\n",diff);
		else printf("UNFIT\n");
	}
	return 0;
}
