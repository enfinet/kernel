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
#define mx		505
typedef long long ll;

char arr[mx][mx];
int l[mx][mx];
int r[mx][mx];
int u[mx][mx];
int d[mx][mx];
int primes[250005];
int n,m;

void prim(int num)
{
	primes[0]=0;
	primes[1]=1;
	for(int i=2;i*i<=num;i++) {
		if(!primes[i])
			for(int j=i;i*j<=num;j++) {
				primes[i*j]=1;
			}
	}
	for(int i=1;i<=num;i++) {
		if(primes[i])primes[i]=0;
		else primes[i]=1;
		primes[i]+=primes[i-1];
	}
}

void sol()
{
	for (int i=0; i<n; i++) {
		for (int j=1,k=m-2; j<m; j++,k--) {
			if (arr[i][j]=='^') {
				if (arr[i][j-1]=='^') {
					l[i][j]=l[i][j-1]+1;
				} else {
					l[i][j]=l[i][j-1];
				}
			} else {
				l[i][j]=0;
			}
			if (arr[i][k]=='^') {
				if (arr[i][k+1]=='^') {
					r[i][k]=r[i][k+1]+1;
				} else {
					r[i][k]=r[i][k+1];
				}
			} else {
				r[i][k]=0;
			}
		}
	}
	for (int i=0; i<m; i++) {
		for (int j=1,k=n-2; j<n; j++,k--) {
			if (arr[j][i]=='^') {
				if (arr[j-1][i]=='^') {
					u[j][i]=u[j-1][i]+1;
				} else {
					u[j][i]=u[j-1][i];
				}
			} else {
				u[j][i]=0;
			}
			if (arr[k][i]=='^') {
				if (arr[k+1][i]=='^') {
					d[k][i]=d[k+1][i]+1;
				} else {
					d[k][i]=d[k+1][i];
				}
			} else {
				d[k][i]=0;
			}
		}
	}
}

int ans(int p, int q)
{
	int val=min(min(l[p][q],r[p][q]),min(u[p][q],d[p][q]));
	if(val>=2)return val;
	return 0;
}

int main()
{
	prim(250005);
	int t;
	s(t);
	while (t--) {
		s(n);
		s(m);
		for(int i=0;i<mx;i++) {
			for(int j=0;j<mx;j++) {
				l[i][j]=0;
				r[i][j]=0;
				u[i][j]=0;
				d[i][j]=0;
			}
		}
		for (int i=0; i<n; i++)
			ss(arr[i]);
		sol();
		ll cnt=0ll;
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++) {
				ll val=ans(i,j);
				if(arr[i][j]=='^' && val)cnt+=(ll)primes[val];
			}
		pl(cnt);nl;
	}
	return 0;
}
