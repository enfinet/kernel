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

int main()
{
    int t;
    s(t);
    while(t--) {
        int n;
        s(n);
        int a[n];
        for(int i=0;i<n;i++)
            s(a[i]);
        if(n<=3) {
                if(n==1) {
                    p(a[0]);nl;
                } else if(n==2) {
                    int val=min(a[0]*a[1],min(a[0]-a[1],a[0]+a[1]));
                    p(val);nl;
                } else {
                    int val=min((a[0]*a[1])*a[2],min((a[0]*a[1])+a[2],min((a[0]*a[1])-a[2],min((a[0]+a[1])*a[2],min((a[0]+a[1])+a[2],min((a[0]+a[1])-a[2],min((a[0]-a[1])*a[2],min((a[0]-a[1])+a[2],(a[0]-a[1])-a[2]))))))));
                    p(val);nl;
                }
        } else {
        int val=a[0];
        for(int i=1;i<n;i++) {
            val=min(val*a[i],min(val+a[i],val-a[i]));
        }
        p(val);nl;
        }
    }
    return 0;
}
