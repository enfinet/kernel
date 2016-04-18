/*
Author : Saurabh Middha (Enfinet)
*/

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

template< class T > T sq(T &x) {
	return x * x;
}
template< class T > T abs(T &n) {
	return (n < 0 ? -n : n);
}
template< class T > T max(T &a, T &b) {
	return (!(a < b) ? a : b);
}
template< class T > T min(T &a, T &b) {
	return (a < b ? a : b);
}
template< class T > T gcd(T a, T b) {
	return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b) {
	return (a / gcd<T>(a, b) * b);
}
template< class T > T mod(T &a, T &b) {
	return (a < b ? a : a % b);
}

#define null		0
#define MOD		1000000007
#define mx		1000005
#define read(f)		freopen(f, "r", stdin)
#define write(f)	freopen(f, "w", stdout)
#define clr(p)		memset(p, 0, sizeof(p))
#define ff		first
#define ss		second
#define PB(x)		push_back(x)
#define fori(i, val, n)	for(int i = val; i < (int)(n); i++)

#define s(a)		scanf("%d",&a)
#define sc(a)		scanf("%c",&a)
#define sl(a)		scanf("%lld",&a)
#define sf(a)		scanf("%f",&a)
#define sd(a)		scanf("%lf",&a)
#define sst(a)		scanf("%s",a)

#define p(a)		printf("%d",a)
#define pc(a)		printf("%c",a)
#define pl(a)		printf("%lld",a)
#define pd(a)		printf("%lf",a)
#define pst(a)		printf("%s",a)

#define nl		printf("\n");
#define sp		printf(" ");

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = 3.1415926535897932384626433832795;

int check(char c)
{
	if(c=='A')return 1;
	else if(c=='J'||c=='K'||c=='Q') return 10;
	else if(c>='1'&&c<='9') return (c-'0');
	else return 0;
}

int main()
{
	int T;
	s(T);
	scanf("\n");
	while (T--) {
		char a,b;
		string aa;
		getline(cin,aa);
		a=aa[0],b=aa[2];
		if(check(a)&&check(b)&&aa[1]!='0'&&aa[3]!='0') {
			int x,y;
			x=check(a);
			y=check(b);
			if(x==1&&y==1)y=11;
			if(x+y<=11) {
				pst("HIT");nl;
			} else {
				pst("STAND");nl;
			}
		} else {
			pst("INVALID");nl;
		}
	}
	return 0;
}
