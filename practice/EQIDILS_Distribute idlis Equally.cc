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

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
	return a.second<=b.second;
}

void sol(int n) {
	int a[3050]={0};
	int sum=0,num;
	for (int i=0; i<n; i++) {
		s(num);
		a[num]++;
		sum+=num;
	}
	if (sum%n) {
		p(-1);
		nl;
	} else {
		int i=0,j=3000;
		int count=0;
		while(1) {
			while(!a[i])i++;
			while(!a[j])j--;
			if(i==j) {
				p(count);nl;
				break;
			} else if(i+1==j) {
				p(-1);nl;
				break;
			}

			int half=(j-i+1)/2;
			int min=(a[i]>a[j])?a[j]:a[i];
			count+=min;
			a[i+half]+=min;
			a[j-half]+=min;
			a[i]-=min;
			a[j]-=min;
		}
	}
}

int main()
{
	int t;
	s(t);
	while (t--) {
		int n;
		s(n);
		sol(n);
	}
	return 0;
}
