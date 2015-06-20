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
#define mod 1000000007

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        vector < pair <int ,int> > v;
        int n,x,y;
        scanf("%d",&n);
        int count=1;
        for(int i=0;i<n;i++) {
            scanf("%d%d",&x,&y);
            v.push_back(make_pair(x,y));
        }
        vector < int > a;
        sort(v.begin(),v.end());
        int num=v[0].second;
        long long ans=0ll;
        long long ans1=0ll;
        a.push_back(num);
        int flag=0;
        long long j=1ll;
        for(int i=1;i<n;i++) {
            if(v[i].first!=v[i-1].first) {
                a.push_back(v[i].second);
                count++;
            }else {
                ans1+=(long long)v[i].second;
            }
        }
        sort(a.begin(),a.end());
        for(int i=0;i<count;i++) {
            ans+=(long long)(j*(long long)a[i]);
            j++;
        }
        ans+=(long long)ans1*(j-1ll);
        printf("%lld\n",ans);
    }
    return 0;
}
