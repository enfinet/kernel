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

#define nl        printf("\n");
#define sp        printf(" ");

typedef long long ll;

int check(int num)
{
	while(num) {
		if(num%10==3||num%10==5||num%10==6)return 1;
		num/=10;
	}
	return 0;
}

int main()
{
	int T;
	s(T);
	while(T--) {
		int n;
		s(n);
		int cnt=0;
		for(int i=1;i*i<=n;i++) {
			if(!(n%i)) {
				cnt+=check(i);
				if(n/i!=i)cnt+=check(n/i);
			}
		}
		p(cnt);nl;
	}
	return 0;
}
