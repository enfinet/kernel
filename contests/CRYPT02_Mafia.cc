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
#define pause		system("pause")
#define read(f)		freopen(f, "r", stdin)
#define write(f)	freopen(f, "w", stdout)
#define clr(p)		memset(p, 0, sizeof(p))
#define ff		first
#define ss		second
#define PB(x)		push_back(x)
#define fori(i, val, n)	for(int i = val; i < (int)(n); i++)
#define ford(i, n)	for(int i = (int)(n) - 1; i >= 0; i--)
#define fore(i, a, n)	for(int i = (int)(a); i < (int)(n); i++)

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
#define mx		105

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = 3.1415926535897932384626433832795;

char a[mx][mx];
int fg[mx][mx];
char str[mx];
int startx,starty,endx,endy;
int n,flag=0,len;

int check(int i,int j)
{
	if (i<0 || j<0 || i>=n || j>=n)return 0;
	return 1;
}

int L(int x,int y)
{
	int j=0,i=y;
//	pst("L\n");
	while(str[j]) {
		if(a[x][i]!=str[j])return 0;
		j++,i--;
	}
	endx=x,endy=i+1;
	return 1;
}
int R(int x,int y)
{
	int j=0,i=y;
//	pst("R\n");
	while(str[j]) {
		if(a[x][i]!=str[j])return 0;
		j++,i++;
	}
	endx=x,endy=i-1;
	return 1;
}
int U(int x,int y)
{
	int j=0,i=x;
//	pst("U\n");
	while(str[j]) {
		if(a[i][y]!=str[j])return 0;
		j++,i--;
	}
	endx=i+1,endy=y;
	return 1;
}
int D(int x,int y)
{
	int j=0,i=x;
//	pst("D\n");
	while(str[j]) {
		if(a[i][y]!=str[j])return 0;
		j++,i++;
	}
	endx=i-1,endy=y;
	return 1;
}
int UL(int x,int y)
{
	int j=0,i=y,k=x;
//	pst("UL\n");
	while(str[j]) {
		if(a[k][i]!=str[j])return 0;
		j++,i--,k--;
	}
	endx=k+1,endy=i+1;
	return 1;
}
int DL(int x,int y)
{
	int j=0,i=y,k=x;
//	pst("DL\n");
	while(str[j]) {
		if(a[k][i]!=str[j])return 0;
		j++,i--,k++;
	}
	endx=k-1,endy=i+1;
	return 1;
}
int UR(int x,int y)
{
	int j=0,i=y,k=x;
//	pst("UR\n");
	while(str[j]) {
		if(a[k][i]!=str[j])return 0;
		j++,i++,k--;
	}
	endx=k+1,endy=i-1;
	return 1;
}
int DR(int x,int y)
{
	int j=0,i=y,k=x;
//	pst("DR\n");
	while(str[j]) {
		if(a[k][i]!=str[j])return 0;
		j++,i++,k++;
	}
	endx=k-1,endy=i-1;
	return 1;
}

int rec(int i,int j)
{
	int flg=0;
	if(!flg && i-len+1 >=0)			flg= U(i,j);
	if(!flg && j-len+1 >=0)			flg= L(i,j);
	if(!flg && i-len+1 >=0 && j-len+1>=0)	flg= UL(i,j);
	if(!flg && i-len+1 >=0 && j+len-1<n)	flg= UR(i,j);
	if(!flg && i+len-1 <n)			flg= D(i,j);
	if(!flg && j+len-1 <n)			flg= R(i,j);
	if(!flg && i+len-1 <n && j-len+1>=0)	flg= DL(i,j);
	if(!flg && i+len-1 <n && j+len-1<n)	flg= DR(i,j);
	return flg;
}

int found()
{
	len=strlen(str);
	fori(i,0,n) {
		fori(j,0,n) {
			if (a[i][j]==str[0]) {
				startx=i+1;
				starty=j+1;
				flag=rec(i,j);
				if (flag) {
					p(startx);
					pc(',');
					p(starty);
					pst(" ");
					p(endx+1);
					pc(',');
					p(endy+1);
					nl;
					return 1;
				}
			}
		}
	}
	return 0;
}

int main()
{
	s(n);
	fori(i,0,n) {
		sst(a[i]);
	}
	sst(str);
	while (str[0]!='0') {
		if (!found()) {
			pst("Not found\n");
		}
		sst(str);
	}
	return 0;
}
