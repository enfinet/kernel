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

int diff(int a,int b)
{
    if(a>=b)return a-b;
    else return b-a;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int sum1=0,sum2=0,i;
        int ans1=0,ans2=0;
        for(i=0;i<k;i++)
            sum1+=a[i];
        for(;i<n;i++)
            sum2+=a[i];
        for(i=0;i<n-k;i++)
            ans1+=a[i];
        for(;i<n;i++)
            ans2+=a[i];
        int sum=diff(sum1,sum2);
        int ans=diff(ans1,ans2);
        if(ans>sum)printf("%d\n",ans);
        else printf("%d\n",sum);
    }
    return 0;
}
