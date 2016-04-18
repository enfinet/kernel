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
#include<functional>
using namespace std;

#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

int main()
{
    string s;
    cin>>s;
    int y=1;
    int n;
    while(s(n)==1) {
        int a[n],b[n];
        for(int i=0;i<n;i++) {
            s(a[i]);
        }
        for(int i=0;i<n;i++) {
            s(b[i]);
        }
        sort(a,a+n);
        sort(b,b+n);
        int sum=0;
        int j=n-1;
        for(int i=0;i<n;i++) {
            sum+=a[i]*b[j];
            j--;
        }
        printf("Case #%d: %d\n",y,sum);
        y++;
    }
    return 0;
}
