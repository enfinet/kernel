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

#define null 0
#define MOD 1000000007

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%lld",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%lld",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl()        printf("\n");
#define sp()        printf(" ");
int r[32];
int main()
{
    int n;
    s(n);
    int a;
    for(int i=0;i<n;i++) {
        s(a);
        int v=0;
		while(a>0)
		{
			r[v]+=a%2;
			a/=2;
			v++;
		}
    }
    long long sum=0ll;
    long long p=1ll;
	for(int i=0;i<32;i++)
	{
		sum+=((long long)r[i]*((long long)r[i]-1ll)/2ll)*p;
		p*=2ll;

	}
    pl(sum);nl();
    return 0;
}
