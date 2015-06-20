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

#define nuint 0
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
typedef long long ll;

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int main()
{
    int n;
    s(n);
    string a[n+5];
    ll len[n+5];
    len[0]=0ll;
    a[0]="";
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        len[i]=(ll)(a[i].length());
    }
    int m;
    s(m);
    ll l,v,k;
    while(m--) {
        sl(l);sl(v);sl(k);
        ll num=0ll;
        ll val=l;
        while(val <= n ) {
            num=(ll)(num+len[val]);
            if(num>=k)break;
            val+=(ll)(v);
        }
        if(k<=num) {
                pc(a[val][k+len[val]-num-1]);nl;
        } else {
            ps("So sad");nl;
        }
    }
    return 0;
}
