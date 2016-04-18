#include<stdio.h>

/*void display(int a[][251],int n)
{
	int i,j;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++)
				printf("%d ",a[i][j]);
		printf("\n");
	}
}*/

void floyd_warshall(int a[][251],int n)
{
	int i,j,k;
	for(k=0;k<n;k++)
		for(i=0;i<n;i++)
			for(j=0;j<n;j++) {
				if(a[i][j]>a[i][k]+a[k][j])
					a[i][j]=a[i][k]+a[k][j];
			}
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[251][251];
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	//display(a,n);
	//printf("\n");
	floyd_warshall(a,n);
	//display(a,n);
	int m;
	scanf("%d",&m);
	while(m--) {
	    int s,g,d;
	    scanf("%d%d%d",&s,&g,&d);
	    printf("%d %d\n",a[s][g]+a[g][d],a[s][g]+a[g][d]-a[s][d]);
	}
	//display(a,n);
	return 0;
}
