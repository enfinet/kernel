#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
#define FOR(i,s,e) for (int i=(s); i<(e); i++)
#define FOE(i,s,e) for (int i=(s); i<=(e); i++)
#define FOD(i,s,e) for (int i=(s)-1; i>=(e); i--)
#define CLR(a,x) memset(a, x, sizeof(a))
#define EXP(i,l) for (int i=(l); i; i=qn[i])
#define LLD long long
using namespace std;

int n, p, ret, rec;
LLD m, a[100005], s[100005];

int main(){
	scanf("%d%I64d", &n, &m);
	FOR(i,0,n) scanf("%I64d", &a[i]);
	sort(a, a + n);

	ret = 0;
	p = 0;
	FOR(i,0,n){
		s[i+1] = s[i] + a[i];
		while (a[i] * (i - p + 1LL) - (s[i+1] - s[p]) > m) ++p;
		if (i - p + 1 > ret) ret = i - p + 1, rec = a[i];
	}

	printf("%d\n", ret);
	return 0;
}
