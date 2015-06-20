#include<iostream>
#include<cstdio>
using namespace std;

#define s(n)	scanf("%d",&n)
#define p(n)	printf("%d",n)
#define nl	printf("\n")

int gcd(int a,int b)
{
	if(!b)return a;
	return gcd(b,a%b);
}

int main()
{
	int T;
	s(T);
	while(T--) {
		int n;
		s(n);
		int num;
		s(num);
		int ans=num;
		n--;
		while(n--) {
			s(num);
			ans=gcd(ans,num);
		}
		p(ans);nl;
	}
	return 0;
}
