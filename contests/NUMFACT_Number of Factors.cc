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
#define sl(a)       scanf("%I64d",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define nl()        printf("\n");
#define sp()        printf(" ");
#define p(a)        printf("%d\n",a)
#define pb(a)       printf("%d ",a)
#define pc(a)       printf("%c\n",a)
#define pcb(a)      printf("%c ",a)
#define pl(a)       printf("%I64\n",a)
#define plb(a)      printf("%I64 ",a)
#define pd(a)       printf("%lf\n",a)
#define pdb(a)      printf("%lf ",a)
#define ps(a)       printf("%s\n",a)
#define psb(a)      printf("%s ",a)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

#define MAX 1000001
int primes[MAX];
void prime()
{
    primes[0]=1;
    primes[1]=1;
    int i,j;
    for (i=2; i*i<=MAX; i++)
        if (!primes[i])
            for (j=i; j*i<MAX; j++)
                primes[i*j] = 1;
}
int main()
{
    prime();
    int t;
    s(t);
    while(t--) {
        int n;
        s(n);
        int ans=1;
        map<int,int>mp;
        for(int i=0; i<n; i++) {
            int num;
            s(num);
            for(int i=0; i*i<=num; i++) {
                if(!primes[i]) {
                    int count=0;
                    while(num%i==0) {
                        num/=i;
                        count++;
                    }
                    if(count)
                        mp[i]+=count;
                }
            }
            if(num!=1)mp[num]++;
        }
        map<int,int> ::iterator it=mp.begin();
        while(it!=mp.end()) {
            ans*=(it->second+1);
            it++;
        }
        p(ans);
    }
    return 0;
}
