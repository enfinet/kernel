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
typedef long long ll;

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int n;

int bsearch(int start,int en)
{
    if(start>en)return n;
    int mid=(start+en)/2;
    if(start<=en) {
        if((ll)(mid*(ll)(mid+1ll)) >= (ll)n && (ll)(mid*(ll)(mid-1ll)) < (ll)n ) return mid;
        else if((ll)(mid*(ll)(mid+1ll)) < (ll)n) return bsearch(mid+1ll,en);
        else return bsearch(start,mid-1);
    }
}

int main()
{
    int t;
    s(t);
    while(t--) {
        s(n);
        n*=2;
        int ans=bsearch(1,n);
        p(ans);nl;
    }
    return 0;
}
