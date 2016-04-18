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

#define p(a)        printf("%d\n",a)
#define pb(a)       printf("%d ",a)
#define pc(a)       printf("%c\n",a)
#define pcb(a)      printf("%c ",a)
#define pl(a)       printf("%lld\n",a)
#define plb(a)      printf("%lld ",a)
#define pd(a)       printf("%lf\n",a)
#define pdb(a)      printf("%lf ",a)
#define ps(a)       printf("%s\n",a)
#define psb(a)      printf("%s ",a)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}
const int M=10005;
long long maxl[M],maxr[M];
long long minr[M],minl[M];

long long max(long long a,long long b)
{
    if(a<b)a=b;
    return a;
}

void maxSubArraySum1(long long a[], int siz)
{
   long long max_so_far = (long long)a[0];
   long long curr_max = (long long)a[0];
   long long curr_min = (long long)a[0];
   long long min_so_far = (long long)a[0];

    maxr[0] = (long long)max_so_far;
    minr[0] = (long long)min_so_far;

   for (int i = 1; i < siz; i++)
   {
        curr_min = (long long)min(a[i], curr_min+a[i]);
        curr_max = (long long)max(a[i], curr_max+a[i]);
        min_so_far = (long long)min(min_so_far, curr_min);
        max_so_far = (long long)max(max_so_far, curr_max);
        maxr[i] = (long long)max_so_far;
        minr[i] = (long long)min_so_far;
   }
}

void maxSubArraySum(long long a[], int siz)
{
   long long max_so_far = (long long)a[0];
   long long curr_max = (long long)a[0];
   long long curr_min = (long long)a[0];
   long long min_so_far = (long long)a[0];

    maxl[0] = (long long)max_so_far;
    minl[0] = (long long)min_so_far;

   for (int i = 1; i < siz; i++)
   {
        curr_min = (long long)min(a[i], curr_min+a[i]);
        curr_max = (long long)max(a[i], curr_max+a[i]);
        min_so_far = (long long)min(min_so_far, curr_min);
        max_so_far =(long long) max(max_so_far, curr_max);
        maxl[i] = (long long)max_so_far;
        minl[i] =(long long) min_so_far;
   }
}

int main()
{
    int t;
    s(t);
    while(t--) {
        int n;
        s(n);
        long long a[n],b[n];
        for(int i=0,j=n-1;i<n;i++,j--) {
            sl(a[i]);
            b[j]=a[i];
        }
        maxSubArraySum(a,n-1);
        maxSubArraySum1(b,n-1);
        long long finalmax=LLONG_MIN;
        for(int i=0,j=n-2;i<n-1;i++,j--) {
            if(finalmax<(long long)max(finalmax,abs(maxl[i]-minr[j])));
                finalmax=(long long)max(finalmax,abs(maxl[i]-minr[j]));
        }
        for(int i=0,j=n-2;i<n-1;i++,j--) {
            if(finalmax<(long long)max(finalmax,abs(maxr[j]-minl[i])));
                finalmax=(long long)max(finalmax,abs(maxr[j]-minl[i]));
        }
        pl(finalmax);
    }
    return 0;
}
