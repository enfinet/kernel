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

#define null            0
#define MOD             1000000007
#define read(f)         freopen(f, "r", stdin)
#define write(f)        freopen(f, "w", stdout)
#define clr(p)          memset(p, 0, sizeof(p))
#define ff              first
#define ss		        second
#define pb(x)           push_back(x)
#define fori(i, val, n) for(int i = val; i < (int)(n); i++)
#define ford(i, val, n) for(int i = val; i > (int)(n); i--)

#define s(a)		    scanf("%d",&a)
#define sc(a)		    scanf("%c",&a)
#define sl(a)		    scanf("%lld",&a)
#define sf(a)		    scanf("%f",&a)
#define sd(a)		    scanf("%lf",&a)
#define sst(a)		    scanf("%s",a)

#define p(a)		    printf("%d",a)
#define pc(a)		    printf("%c",a)
#define pl(a)		    printf("%lld",a)
#define pd(a)		    printf("%lf",a)
#define pst(a)		    printf("%s",a)

#define nl              printf("\n")
#define sp              printf(" ")

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = 3.1415926535897932384626433832795;
#define mx 100005

int a[mx];

ll maxSubArraySum(int sz)
{
   ll max_so_far = 0ll, i;
   ll curr_max = 0ll;

   for (i = 0; i < sz; i++) {
        curr_max = (ll)max((ll)a[i], curr_max+(ll)a[i]);
        max_so_far = (ll)max(max_so_far, curr_max);
   }
   return max_so_far;
}

int main()
{
    int T;
    s(T);
    while(T--) {
        int n;
        s(n);
        ll sm=0ll;
        for(int i=0;i<n;i++) {
            s(a[i]);
            a[i]*=-1;
            sm+=(ll)a[i];
        }
        ll val=maxSubArraySum(n);
        ll ans=sm-val;
        if(ans < 0ll)ans*=-1ll;
        val+=ans;
        pl(val);nl;
    }
    return 0;
}
