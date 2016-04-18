#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>

#include <iostream>
#include <fstream>
#include <sstream>
#include <istream>
#include <ostream>
#include <iomanip>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

#include <bitset>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>

using namespace std;

typedef unsigned long long ll;
typedef struct node {
	int a;
	struct node *next;
} node;

#define null 0
#define MOD 1000000007

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%llu",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%llu",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl        printf("\n");
#define sp        printf(" ");

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
	return a.second<=b.second;
}

ll gcd(ll a,ll b)
{
//	if(!b) return a;
//	else return gcd(b,a%b);
	ll t=0ll;
	while (b>0ll)
	{
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}

ll C(ll n, ll k)
{
	ll res = 1ll;
	if ( k > n - k )
		k = n - k;
	for (ll i = 1ll; i <= k; ++i)
	{
		ll num=gcd(res,i);
		res /= num;
		res *= (n-i+1ll)/(i/num);
	}
	return res;
}

int main()
{
	int t;
	s(t);
	while (t--) {
		ll n,r;
		sl(n);
		sl(r);
		if (n<r) {
			p(0);
			nl;
		} else {
			pl(C(n,r));
			nl;
		}
	}
	return 0;
}
