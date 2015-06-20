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
#define p(a) printf("%d",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

bool cmp(const pair<int,pair<int ,int> > &a,const pair<int,pair<int ,int> > &b)
{
    return a.first==b.first && a.second.second > b.second.second;
}

int main()
{
    string s;
    cin>>s;
    int n;
    int t=1;
    while(s(n)==1) {
    vector<pair<int,pair<int ,int> > > v;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        s(a[i]);
    for(int i=0;i<n;i++)
        s(b[i]);
    for(int i=0;i<n;i++) {
        v.push_back(make_pair(b[i],make_pair(a[i],i)));
    }
    sort(v.begin(),v.end());
    sort(v.begin(),v.end(),cmp);
    printf("Case #%d: ",t);
    for(int i=n-1;i>=0;i--)
        printf("%d ",(v[i].second).second);
        printf("\n");
        t++;
    }
    return 0;
}
