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
		int a,b,c;
		int x,y,z;
		s(a);s(b);s(c);
		s(x);s(y);s(z);
		if(!a)a=24;
		if(!x)x=24;
		if(a>x)x+=24;
		int val1=a*3600+b*60+c;
		int val2=x*3600+y*60+z;
//		p(val1);sp;p(val2);nl;
		int num=val2-val1;
		num%=400;
//		p(num);nl;
		if(num<100) {
			pc('S');
		} else if(num<200) {
			pc('C');
		} else if(num<300) {
			pc('S');
		} else pc('C');
		nl;
	}
	return 0;
}
