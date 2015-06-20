#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--) {
	int n;
	cin>>n;
	int sum=(int)(n*(n+1))/2;
	double ans;
	int b;
	cin>>b;
	int a,sum2=0;
	for(int i=0;i<b;i++) {
		cin>>a;
		sum2+=a;
	}
	int x;
	cin>>x;
	double z=(double)n/2.0;
	int y=ceil(z);
	ans=(double)(sum-sum2)*(y-x)/y;
	printf("%.4f\n",ans);
	}
	return 0;
}
