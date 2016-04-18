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
#define mp(x,y)         make_pair(x,y)
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

int main()
{
    int T;
    s(T);
    while(T--) {
        int n;
        s(n);
        if(n) {
        //vector <pair <int, int> > v;
        int a,b;
        map<int,int> mp1,mp2;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++) {
            s(a);s(b);
            if(!mp1[a]) {
                    mp1[a]++;
                    cnt1++;
            }
            if(!mp2[b]) {
                    mp2[b]++;
                    cnt2++;
            }
        }
        cnt1++;
        cnt2++;
        ll ans=(ll)((ll)cnt1*(ll)cnt2);
        pl(ans);nl;
        } else {
            p(0);nl;
        }
        //p(mn1);sp;p(mx1);nl;
        //p(mn2);sp;p(mx2);nl;
    }
    return 0;
}
