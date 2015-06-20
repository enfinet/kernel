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

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n+1],sum=0;
        for(int i=0; i<n; i++) {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        int num=sum%m,flag=0;
        for(int i=0;i<n;i++)
            if(num>=a[i])
                flag=1;
        if(flag)printf("-1\n");
        else printf("%d\n",sum/m);
    }
    return 0;
}
