#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

#define s(a) scanf("%lld",&a)
#define p(a) scanf("%d\n",a)

int main()
{
	int t;
	scanf("%d",&t);
	while(t--) {
		long long x,y;
		s(x);s(y);
		long long a,b;
		a=(long long)min(x,y);
		b=(long long)max(x,y);
		printf("%lld\n",(long long)((a-1)*b-a));
	}
	return 0;
}
