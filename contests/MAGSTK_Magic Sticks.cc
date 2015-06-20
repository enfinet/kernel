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
#define sl(a)       scanf("%I64d",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%I64d",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl()        printf("\n");
#define sp()        printf(" ");

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

void print(vector< pair< pair<int ,int>,int > > &v, int n)
{
    for(int i=0;i<n;i++) {
            p(v[i].first.first);sp();p(v[i].first.second);sp();p(v[i].second);nl();
        }
}

void solution(vector< pair< pair<int ,int>,int > > &v, int n)
{
    int a[n];
    int b[n+1];
    for(int i=0;i<n;i++)
        a[i]=1;
    int diff=0,h=0,cnt=0;
    for(int i=0;i<n;i++) {
        cnt=0;
        h=v[i].first.second;
        for(int j=i+1;j<n;j++) {
            diff=v[j].first.first-v[j-1].first.first;
            if(h>diff) {
                cnt++;
                h=max(v[j].first.second,h-diff);
            } else break;
        }
        a[i]+=cnt;
    }
    for(int i=0;i<n;i++) {
        b[v[i].second]=a[i];
    }
    for(int i=1;i<=n;i++) {
        p(b[i]);sp();
    }
    nl();
}

int main()
{
    int t;
    s(t);
    while(t--) {
        int n;
        s(n);
        vector< pair< pair<int,int> ,int> > v;
        int num=1;
        int x,y;
        for(int i=0;i<n;i++) {
            s(x);s(y);
            v.push_back(make_pair(make_pair(x,y),num));
            num++;
        }
        sort(v.begin(),v.end());
        solution(v,n);
    }
	return 0;
}
