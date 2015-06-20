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

int main()
{
	int T;
	s(T);
	while(T--) {
		int n;
		s(n);
		int a[n];
		for(int i=0;i<n;i++)
			s(a[i]);
		sort(a,a+n);
		int ind=n/2;
		int val=a[ind];
		int sum=0;
		for(int i=0;i<n;i++) {
			if(i<ind)sum+=val-a[i];
			else if(i>ind)sum+=a[i]-val;
		}
		p(sum);nl;
	}
	return 0;
}
