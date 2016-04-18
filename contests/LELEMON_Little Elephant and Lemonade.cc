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

#define nl()        printf("\n");
#define sp()        printf(" ");

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int main()
{
    int t;
    s(t);
    while(t--) {
        int n,m;
        s(n);s(m);
        int trav[m];
        for(int i=0;i<m;i++)
            s(trav[i]);
        int lst[n][105],sz[n];
        int c;
        for(int i=0;i<n;i++) {
            s(c);
            for(int j=0;j<c;j++) {
                s(lst[i][j]);
            }
            sort(lst[i],lst[i]+c);
            sz[i]=c;
        }
        int sum=0;
        for(int i=0;i<m;i++) {
            if(sz[trav[i]]>0) {
                sum+=lst[trav[i]][sz[trav[i]]-1];
                sz[trav[i]]--;
            }
        }
        p(sum);nl();
    }
    return 0;
}
