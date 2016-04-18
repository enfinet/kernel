#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>
using namespace std;

#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.first<b.first || (a.first==b.first && a.second>b.second);
}

double distance(double x1,double y1,double x2,double y2)
{
    double ans= ( (x2-x1) * (x2-x1)+ (y2-y1) * (y2-y1));
    return sqrt( ans );
}

int main()
{
    int t;
    s(t);
    while(t--) {
        int n;
        s(n);
        vector< pair<int,int> > v;
        int x,y;
        for(int i=0; i<n; i++) {
            s(x);
            s(y);
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end(),cmp);
        double dist=0.0f;
        for(int i=1; i<n; i++) {
            dist+=distance( v[i-1].first, v[i-1].second, v[i].first, v[i].second);
        }
        printf("%.2f\n",dist);
    }
    return 0;
}
