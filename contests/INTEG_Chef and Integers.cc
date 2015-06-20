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

typedef long long ll;
#define nl        printf("\n");
#define sp        printf(" ");
#define mx	100005

ll n,x;
ll arr[mx];

ll sol()
{
	ll diff[mx];
	diff[0]=0ll;
	for (ll i=1ll; i<=n; i++)
		diff[i]=diff[i-1ll]+(arr[i]-arr[i-1ll])*i;

	ll ans=LLONG_MAX,temp=0ll;
	arr[n]=0ll;
	if (arr[0]<0ll) {
		for (int i=0; arr[i]<=0ll && (ll)i<=n; i++) {
			temp=arr[i]*x*(-1ll)+diff[i];
			ans=(ll)min(ans,temp);
		}
	} else ans=0ll;
	return (ll)ans;
}

int main()
{
	sl(n);
	for (int i=0; i<n; i++)
		sl(arr[i]);
	sort(arr,arr+n);
	sl(x);
	ll ans=sol();
	pl(ans);
	nl;
	return 0;
}
