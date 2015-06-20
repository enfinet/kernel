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
    int t;
    s(t);
    while(t--) {
        int n;
        s(n);
        ll arr[n];
        for(int i=0; i<n; i++) {
            sl(arr[i]);
        }
        ll mx=((ll)(arr[0]^arr[1])^arr[2]);
        for(int i=0; i<n-2; i++) {
            for(int j=i+1; j<n-1; j++) {
                    for(int k=j+1; k<n; k++) {
                            if(((ll)(arr[i]^arr[j])^arr[k]) > mx)mx=((ll)(arr[i]^arr[j])^arr[k]);
                    }
            }
        }
        pl(mx);
        nl;
    }
    return 0;
}
