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
#define MAX	10005

typedef long long ll;

int a[MAX];
int size;

ll mx(ll a,ll b)
{
	if(a<b)a=b;
	return a;
}

ll maxSubArraySum()
{
	ll max_so_far = (ll)a[0];
	int i;
	ll curr_max = (ll)a[0];

	for (i = 1; i < size; i++)
	{
		curr_max = (ll)mx((ll)a[i], (ll)((ll)curr_max+(ll)a[i]));
		max_so_far = (ll)mx((ll)max_so_far, (ll)curr_max);
	}
	return max_so_far;
}

int main()
{
	int T;
	s(T);
	while (T--) {
		s(size);
		for (int i=0; i<size; i++) {
			s(a[i]);
		}
		ll sum = (ll)maxSubArraySum();
		pl(sum);
		nl;
	}
	return 0;
}
