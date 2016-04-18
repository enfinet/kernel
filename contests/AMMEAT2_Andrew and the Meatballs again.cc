#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
using namespace std;

#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

bool cmp(const pair<int,pair<int ,int> > &a,const pair<int,pair<int ,int> > &b)
{
    return a.first==b.first && a.second.second > b.second.second;
}

int main()
{
    int t;
    s(t);
    while(t--) {
        int n,k;
        s(n);s(k);
        if(n==1)p(1);
        else {
        if(k>n/2)p(-1);
        else {
            int count=0;
            for(int i=2;count<k;i+=2,count++) {
                printf("%d ",i);
            }
            printf("\n");
        }
        }
    }
    return 0;
}
