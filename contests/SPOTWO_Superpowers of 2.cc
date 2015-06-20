#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>
#include <ctime>

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
#define sl(a)		    scanf("%llu",&a)
#define sf(a)		    scanf("%f",&a)
#define sd(a)		    scanf("%lf",&a)
#define sst(a)		    scanf("%s",a)

#define p(a)		    printf("%d",a)
#define pc(a)		    printf("%c",a)
#define pl(a)		    printf("%llu",a)
#define pd(a)		    printf("%lf",a)
#define pst(a)		    printf("%s",a)

#define nl              printf("\n");
#define sp              printf(" ");

typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;
const double PI = 3.1415926535897932384626433832795;

/*inline void ifast(int &x)
{
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    if(c=='-')
    {
        neg = 1;
        c = getchar_unlocked();
    }
    for(; c>47 && c<58 ; c = getchar_unlocked())
    {
        x = (x<<1) + (x<<3) + c - 48;
    }
    if(neg)
        x = -x;
}*/

ull con(ull n)
{
    ull num=0;
    ull val=1;
    while(n!=0) {
        num+=val*(n%2);
        n/=2;
        val*=10;
    }
    return num;
}

ull pow(ull n)
{
    if(n==1) return 2;
    ull ans=pow(n/2);
    if(n%2)return (2*(ans*ans)%MOD)%MOD;
    else return (ans*ans)%MOD;
}

void sum(ull num)
{
    int arr[50],i=0;
    int car=0;
    while(num!=0) {
        int val=num%10;
        val*=2;
        val+=car;
        car=val/10;
        arr[i++]=val%10;
        num/=10;
    }
    i--;
    while(i>=0) {
        p(arr[i]);
        i--;
    }
    nl;
}

ull mulmod(ull a,ull b){
    ull x = 0,y=a%MOD;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%MOD;
        }
        y = (y*2)%MOD;
        b /= 2;
    }
    return x%MOD;
}

int main()
{
	int T;
	s(T);
	while (T--) {
		ull n;
		sl(n);
		ull ans=con(n);
		ull val=pow(ans);
		val%=MOD;
		pl(mulmod(val,val));nl;
	}
	return 0;
}
