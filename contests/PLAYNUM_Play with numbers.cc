#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

#define s(a) scanf("%d",&a)
#define p(a) scanf("%d\n",a)

int main()
{
	int t;
	s(t);
	while(t--) {
		int n,a;
		s(n);s(a);
		int arr[n];
		for(int i=0;i<n;i++)
			s(arr[i]);
		sort(arr,arr+n);
		int brr[n];
		for(int i=0;i<n;i++)
			brr[i]=0;
		int x,y;
		while(a--) {
			s(x);s(y);
			brr[x-1]++;
			brr[y]--;
		}
		for(int i=1;i<n;i++)
			brr[i]+=brr[i-1];
		sort(brr,brr+n);
		long long ans=0ll;
		for(int i=n-1;i>=0;i--) {
			ans+=(long long)brr[i]*(long long)arr[i];
		}
		printf("%lld\n",ans);
	}
	return 0;
}
