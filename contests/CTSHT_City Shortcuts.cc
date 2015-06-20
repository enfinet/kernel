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
#define mx	210

typedef long long ll;

int a[mx][mx];

int main()
{
	int T;
	s(T);
	while(T--) {
		int n;
		s(n);
		char str[n+1][n+1];
		for(int i=0;i<n;i++)
			ss(str[i]);
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(i==j)a[i][j]=0;
				else if(str[i][j]=='Y') a[i][j]=1;
				else a[i][j]=1000000;
//				p(a[i][j]);sp;
			}
//			nl;
		}
		for(int k=0;k<n;k++) {
			for(int i=0;i<n;i++) {
				for(int j=0;j<n;j++) {
					if(a[i][j]>a[i][k]+a[k][j])a[i][j]=a[i][k]+a[k][j];
				}
			}
		}
		int m;
		s(m);
		int x,y;
		while(m--) {
			s(x);s(y);
			p(a[x][y]);nl;
		}
	}
	return 0;
}
