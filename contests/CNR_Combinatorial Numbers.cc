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

template< class T > T sq(T &x)
{
    return x * x;
}
template< class T > T abs(T &n)
{
    return (n < 0 ? -n : n);
}
template< class T > T max(T &a, T &b)
{
    return (!(a < b) ? a : b);
}
template< class T > T min(T &a, T &b)
{
    return (a < b ? a : b);
}
template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}
template< class T > T mod(T &a, T &b)
{
    return (a < b ? a : a % b);
}

#define null            0
#define MOD             1000000007
#define read(f)         freopen(f, "r", stdin)
#define write(f)        freopen(f, "w", stdout)
#define clr(p)          memset(p, 0, sizeof(p))
#define ff              first
#define ss		        second
#define pb(x)           push_back(x)
#define fori(i, val, n) for(int i = val; i < (int)(n); i++)
#define ford(i, val, n) for(int i = val; i > (int)(n); i--)

#define s(a)		    scanf("%d",&a)
#define sc(a)		    scanf("%c",&a)
#define sl(a)		    scanf("%lld",&a)
#define sf(a)		    scanf("%f",&a)
#define sd(a)		    scanf("%lf",&a)
#define sst(a)		    scanf("%s",a)

#define p(a)		    printf("%d",a)
#define pc(a)		    printf("%c",a)
#define pl(a)		    printf("%lld",a)
#define pd(a)		    printf("%lf",a)
#define pst(a)		    printf("%s",a)

#define nl              printf("\n");
#define sp              printf(" ");

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = 3.1415926535897932384626433832795;
#define mx  10000005

int power(int n)
{
    if(n==0)return 1;
    else {
        int val=power(n/2);
        if(n%2)return 2*val*val;
        else return val*val;
    }
}

int check(int num)
{
    int ans=0;
    while(num) {
        if(num%2)ans++;
        num/=2;
    }
    return ans;
}

int b[mx];

void run()
{
    for(int i=0;i<=mx;i++)
        b[i]=check(i);
}

void print(int n,int ans){
    int arr[n+1];
    int i=0;
    while(n--) {
        //p(ans%2);
        arr[i++]=ans%2;
        ans/=2;
    }
    while(i--) {
        p(arr[i]);
    }
}

int main()
{
    run();
    int T;
    s(T);
    while (T--) {
            int n,k,m;
            s(n);s(k);s(m);
            int val=power(n);
            val--;
            int cnt=0;
            int flag=0;
            int ans=-1;
            for(int i=0;i<=val;i++) {
                if(b[i]==k)cnt++;
                if(cnt==m) {
                    flag=1;
                    ans=i;
                    break;
                }
            }
            if(flag) {
                print(n,ans);nl;
            } else {
                p(-1);nl;
            }
    }
    return 0;
}
