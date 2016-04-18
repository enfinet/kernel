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

#define null 0
#define MOD 1000000007

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%lld",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%lld",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl        printf("\n");
#define sp        printf(" ");
#define mx	100000

typedef long long ll;

#include <cstdio>
#include <iostream>
using namespace std;

ll n;

ll gcd(ll a,ll b)
{
	if(b==0ll) return a;
	else return gcd(b,a%b);
}

int main()
{
	int t;
	s(t);
	while (t--) {
		sl(n);
		ll sum=0ll;
		for ( int i = 1ll; i*i <= n; ++i )
			sum+=n/i;
		sum*=2ll;
		ll ans=sqrt((ll)n);
		sum-=(ll)ans*(ll)ans;
		ll p=n*n;
		ll g=(ll)gcd(sum,p);
		sum/=g;
		p/=g;
		pl(sum);pc('/');pl(p);
		nl;
	}
	return 0;
}
