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
#define MOD             1000000007ll
#define pause           system("pause")
#define read(f)         freopen(f, "r", stdin)
#define write(f)        freopen(f, "a+", stdout)
#define clr(p)          memset(p, 0, sizeof(p))
#define ff              first
#define ss		        second
#define PB(x)           push_back(x)
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

int a[]= {1,9,10,99,100,999,1000,9999,10000,99999,100000,999999,1000000,9999999,10000000,99999999,100000000,999999999,1000000000};
int b[]= {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10};
int c[]= {0,45,4905,494550,49495500,949954972,999546542,995153507,920350007,85000028,252970447};

int length(int num)
{
    int cnt=0;
    while(num) {
        cnt++;
        num/=10;
    }
    return cnt;
}

ll sm(ll n)
{
    ll val=n+1ll;
    if(n%2ll) {
        val/=2ll;
    } else {
        n/=2ll;
    }
    return (n*val)%MOD;
}

int main()
{
    int T;
    s(T);
    while (T--) {
        int l,r;
        s(l);
        s(r);
        int l1=length(l);
        int l2=length(r);
        if(l1==l2) {
                ll sum=sm((ll)r)-sm((ll)l-1ll);
                if(sum<0ll)sum+=MOD;
                sum=(sum*(ll)l1)%MOD;
                sum%=MOD;
                if(l==1000000000ll) {
                        sum=10000000000ll%MOD;
                }
                pl(sum);nl;
        } else {
            int flag=0;
            if(r==1000000000ll)flag=1;
            int x=0;
            while(b[x]<=l1)x++;
            x--;
            int y=0;
            while(b[y]<l2)y++;

            ll sum=0ll;
            for(int i=l1+1; i<l2; i++) {
                sum=(sum+((ll)c[i]*(ll)i)%MOD)%MOD;
            }

            //pl(sm((ll)a[x]));sp;pl(sm((ll)l-1ll));nl;

            ll t1=sm((ll)a[x])-sm((ll)l-1ll);
            if(t1<0ll)t1+=MOD;
            ll temp1=t1%MOD;
            temp1=(temp1*(ll)l1)%MOD;
            //pl(temp1);sp;

            ll t2=sm(r)-sm(a[y-1]);

            //pl(sm(r));sp;pl(sm(a[y-1]));nl;
            if(t2<0ll)t2+=MOD;
            ll temp2=t2%MOD;
            temp2=(temp2*(ll)l2)%MOD;
            //pl(temp2);nl;

            sum=(sum+temp1)%MOD;
            if(!flag)
            sum=(sum+temp2)%MOD;
            else
            sum=(sum+10000000000ll)%MOD;
            pl(sum);
            nl;
        }
    }
    return 0;
}


/*
9 0
99 9
999 99
9999 999
99999 9999
999999 99999
9999999 999999
99999999 9999999
999999999 99999999
9999999999 999999999
*/
