#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
using namespace std;

#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

bool cmp(const pair<int,pair<int ,int> > &a,const pair<int,pair<int ,int> > &b)
{
    return a.first==b.first && a.second.second > b.second.second;
}

int main()
{
    int t;
    s(t);
    while(t--) {
        int n;
        s(n);
        long long k;
        sl(k);
        long long a[n];
        for(int i=0;i<n;i++)
            sl(a[i]);
        sort(a,a+n);
        int count=0,i=n-1;
        long long sum=0ll;
        while(sum<k&&i>=0) {
            sum+=a[i];
            i--;
            count++;
        }
        if(sum>=k)
            p(count);
        else p(-1);
    }
    return 0;
}
