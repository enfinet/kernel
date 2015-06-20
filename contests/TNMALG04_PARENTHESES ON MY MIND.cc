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

long long C(long long n, long long k)
{
    long long res = 1ll;

    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;

    // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (long long i = 0ll; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1ll);
    }

    return res;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        string s;
        cin>>s;
        long long n=(long long)s.length();
        n-=1ll;
        long long ans=(long long)C(2ll*n,n);
        cout<<ans/(n+1ll)<<endl;
    }
    return 0;
}
