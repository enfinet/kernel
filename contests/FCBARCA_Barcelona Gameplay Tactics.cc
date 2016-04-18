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

long long pow(long long a,long long b)
{
    if(b==0ll)return 1ll;
    else {
        long long num=pow(a,b/2ll)%mod;
        if(b%2ll) return ((a%mod)*(((num%mod)*(num%mod))%mod))%mod;
        else return ((num%mod)*(num%mod))%mod;
    }
}

long long a[1001][11];

int main()
{
    for(long long i=0ll;i<11ll;i++) {
        a[2][i]=(long long)i;
        a[3][i]=(long long)(i*(i-1ll));
    }
    for(long long i=4ll;i<1001ll;i++)
        for(long long j=1ll;j<11ll;j++) {
            int num=(long long)pow(j,i-2ll);
            num=(long long)((num%mod)*((j-1ll)%mod))%mod;
            a[i][j]=(long long)((num%mod)+(a[i-2ll][j]%mod))%mod;
        }
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,k;
        scanf("%d%d",&n,&k);
        printf("%lld\n",a[n][k]);
    }
    return 0;
}
