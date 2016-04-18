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

long long a[1000005];

void fibo()
{
    a[0]=1ll;a[1]=1ll;
    for(int i=2;i<1000001;i++)
        a[i]=(a[i-1]+a[i-2])%MOD;
}

int foo(long long n, long long r) {
  if (n  > 0ll) return (n%r +  foo (n/r, r ));
  else return 0;
}


int main()
{
    fibo();
    int t;
    scanf("%d",&t);
    while(t--) {
        long long n;
        int g;
        scanf("%lld%d",&n,&g);
        int count=foo(a[n],2ll);
        if(count==g)printf("CORRECT\n");
        else printf("INCORRECT\n");
    }
    return 0;
}
