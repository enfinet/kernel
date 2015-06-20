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

#define nl()        printf("\n");
#define sp()        printf(" ");

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

//map <int ,int> temp;
long long temp[100001];

void gen_primes(long long MAX)
{
    temp[0]=1;temp[1]=1;
    for(int i=2; (long long)i*i<=MAX; i++)
        if(!temp[i])
            for(int j=i; (long long)j*i<=MAX; j++)
                //if(j*i<1000000)
                    temp[i*j]=1;
}

int main()
{
    gen_primes(100001);
    int t;
    s(t);
    while(t--) {
        long long x,y;
        sl(x);sl(y);
        if(x>=100000) {
            x=100000;y=100000;
        } else {
            if(y>100000)y=100000;
        }

        int count=0;
        for(long long i=x;i<=y;i++) {
                if(!temp[i]) {
                    if(i%4ll ==1 || i%4ll==2)count++;
                        //ps("Yes\n");
                }
        }
        p(count);nl();
    }
    return 0;
}
