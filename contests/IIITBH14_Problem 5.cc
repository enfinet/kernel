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
#define p(a) printf("%d",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

int main()
{
    string s;
    cin>>s;
    int t=1;
    int c;
    while(s(c)==1) {
        int n;
        s(n);
        int a[n];
        for(int i=0;i<n;i++)
            s(a[i]);
        int p,q,flag=0;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++)
                if(a[i]+a[j]==c) {
                    p=i+1,q=j+1;
                    flag=1;
                    break;
                }
            if(flag)break;
        }
        printf("Case #%d: %d %d\n",t,p,q);
        t++;
    }
    return 0;
}
