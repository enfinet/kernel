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

typedef long long ll;
#define nl        printf("\n");
#define sp        printf(" ");
#define MAX		100006

int ls[MAX];
int rnk[MAX];
int flag[MAX];
int mul[MAX];

void create_set(int x)
{
	ls[x]=x;
	rnk[x]=0;
}

int find_set(int x)
{
	if (ls[x]!=x)ls[x]=find_set(ls[x]);
	return ls[x];
}

void merge_set(int x,int y)
{
	int px=find_set(x),py=find_set(y);

	if (rnk[px]>rnk[y])ls[py]=px;
	else ls[px]=py;

	if (rnk[px]==rnk[py])rnk[py]++;
}

int main()
{
	int t;
	s(t);
	while (t--) {
		int n,m;
		s(n);
		s(m);
		for(int i=0;i<=n;i++) {
			flag[i]=0;
			create_set(i);
			mul[i]=0;
		}
		int x,y;
		while (m--) {
			s(x);
			s(y);
			merge_set(x,y);
		}
		int count=0,l=0;
		for (int i=1; i<=n; i++) {
			int num=find_set(i);
			if (!flag[num]) {
				count++;
				flag[num]=count;
			}
			mul[flag[num]]++;
		}
		p(count);
		sp;
		ll ans=1ll;
		for (int i=1; i<=count; i++)
			ans=(ll)((ll)ans*(ll)mul[i])%MOD;
		pl(ans);
		nl;
	}
	return 0;
}
