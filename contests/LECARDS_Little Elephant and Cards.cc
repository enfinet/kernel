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

#define MOD 1000000007
using namespace std;

long long a[1005][510];

void pascal()
{
    a[0][0]=1ll,a[1][0]=1ll,a[1][1]=1ll;
    for(int i=2;i<1001;i++) {
        a[i][0]=1ll;
        //cout<<a[i][0]<<" ";
        for(int j=1;j<=i;j++) {
            a[i][j]=(a[i-1][j-1]+a[i-1][j])%MOD;
          //  cout<<a[i][j]<<" ";
        }
        //cout<<endl;
    }
}

int main()
{
    pascal();
    int t;
    scanf("%d",&t);
    while(t--) {
        long long n;
        scanf("%lld",&n);
        long long x=n;
        int num;
        while(x--) {
            scanf("%d",&num);
        }
        long long ans=0ll;
        for(int i=0;i<(int)ceil((double)n/2.0);i++)
            ans=(ans+a[n][i])%MOD;
        printf("%lld\n",ans);
    }
    return 0;
}
