#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--) {
		char a[100050];
		scanf("%s",a);
		int i,l=strlen(a),count=0;
		for(i=0;i<l;i++)
			if(a[i]!='4' && a[i]!='7')
				count++;
		printf("%d\n",count);
	}
	return 0;
}
