#include<stdio.h>
#include<stdlib.h>


#define s(a) scanf("%d",&a)
#define p(a) scanf("%d\n",a)
#define mod 1000000007
typedef long long ll;

int main()
{
	int t;
	scanf("%d",&t);
	int arr[150];
	arr[0]=1;
	arr[1]=1;
	arr[2]=3;
	int num=5,i;
	for (i=3; i<110; i++) {
		arr[i]=((ll)arr[i-1]*num)%mod;
		num+=2;
	}
	while (t--) {
		int n;
		s(n);
		printf("%d\n",arr[n]);
	}
	return 0;
}
