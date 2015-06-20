#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cfloat>
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

double dist(int x1,int y1,int x2,int y2)
{
	int a=x2-x1,b=y2-y1;
	if(a<0)a*=-1;
	if(b<0)b*=-1;
	return sqrt((double)a*(double)a+(double)b*(double)b);
}

int main()
{
	int n;
	s(n);
	double mx=DBL_MIN,mn=DBL_MAX;
	int ind1=0,ind2=0;
	int i=1;
	while(n--) {
		int x1,x2,x3,y1,y2,y3;
		s(x1);s(y1);s(x2);s(y2);s(x3);s(y3);
		double x,y,z;
		x=(double)dist(x1,y1,x2,y2);
		y=(double)dist(x1,y1,x3,y3);
		z=(double)dist(x3,y3,x2,y2);
		double J=(double)(x+y+z)/2.0;
		double val=(double)J*(J-x)*(double)(J-y)*(J-z);
		if(val>=mx) {
			ind1=i;
			mx=val;
		}
		if(val<=mn) {
			ind2=i;
			mn=val;
		}
		i++;
	}
	p(ind2);sp;p(ind1);nl;
	return 0;
}
