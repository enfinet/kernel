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
#define mx	100

typedef long long ll;

int arr[mx];
int sum,n;

int main()
{
	int t;
	s(t);
	while (t--) {
		s(n);
		s(sum);
		for (int i=0; i<n; i++)
			s(arr[i]);
		bool subset[sum+1][n+1];
		subset[0][0] = true;
		for (int i = 1; i <= sum; i++)
		{
			subset[i][0] = false;
			for (int j = 1; j <= n; j++)
			{
				subset[0][j] = true;
				subset[i][j] = subset[i][j-1];
				if (i >= arr[j-1])
					subset[i][j] = subset[i][j] || subset[i - arr[j-1]][j-1];
			}
		}
		if (subset[sum][n]) {
			ps("Yes\n");
		} else {
			ps("No\n");
		}
	}
	return 0;
}
