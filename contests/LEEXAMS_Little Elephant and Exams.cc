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
#define sd(a)       scanf("%f",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%lld",a)
#define pd(a)       printf("%.9f",a)
#define ps(a)       printf("%s",a)

#define nl        printf("\n");
#define sp        printf(" ");
#define mx         100

typedef long long ll;

double prob[mx][3];
int flag[mx];
int a[mx][3],n;
double ans=1.0,val=0.0;

int check()
{
    int cnt=0;
    for (int i=1; i<=16; i++)
        if (flag[i])cnt++;
    if(cnt==n) return 1;
    else return 0;
}

void rec(int i,double ans)
{
    if (i<=n && !flag[a[i][1]]) {
        if(i==1)ans=1.0;
        flag[a[i][1]]=1;
        double v=ans*prob[i][1];
        rec(i+1,v);
        if (check()) {
            val+=v;
        }
        /*if (flag[a[i][1]] && prob[i][1]!=0.0)
            ans/=prob[i][1];*/
        flag[a[i][1]]=0;
    }
    if (i<=n && !flag[a[i][2]]) {
        if(i==1)ans=1.0;
        flag[a[i][2]]=1;
        double v=ans*prob[i][2];
        rec(i+1,v);
        if (check()) {
            val+=v;
        }
        /*if (flag[a[i][2]] && prob[i][2]!=0.0)
            ans/=prob[i][2];*/
        flag[a[i][2]]=0;
    }
}

int main()
{
    int t;
    s(t);
    while (t--) {
        s(n);
        int num;
        for(int i=0; i<=20; i++)
            flag[i]=0;
        for (int i=1; i<=n; i++) {
            s(num);
            s(a[i][1]);
            s(a[i][2]);
            prob[i][1]=(double)num;
            prob[i][2]=(double)(100-num);
            prob[i][1]/=100.0;
            prob[i][2]/=100.0;
        }
        if (n<=16) {
            ans=1.0;
            val=0.0;
            rec(1,ans);
            pd(val);
            nl;
        } else {
            pd(0.0);
            nl;
        }
    }
    return 0;
}
