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

int main()
{
	int n,m;
	s(n);
	s(m);
	int arr[n][m];
	int a[n],b[m];
	for (int i=0; i<n; i++) {
		a[i]=INT_MAX;
		for (int j=0; j<m; j++) {
			s(arr[i][j]);
			a[i]=min(a[i],arr[i][j]);
		}
	}
	for (int i=0; i<m; i++) {
		b[i]=INT_MIN;
		for (int j=0; j<n; j++) {
			b[i]=max(b[i],arr[j][i]);
		}
		for (int j=0; j<n; j++) {
			if (b[i]==a[j]) {
				p(a[j]);
				nl;
				return 0;
			}
		}
	}
	ps("GUESS\n");
	return 0;
}
