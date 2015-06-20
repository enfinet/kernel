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
    while(t--) {
        int n;
        scanf("%d",&n);
        int ans=sqrt(n),i;
        for(i=ans;i>=1;i--) {
            if(!(n%i))break;
        }
        ans=n/i;
        if(ans>i)printf("%d\n",ans-i);
        else printf("%d\n",i-ans);
    }
    return 0;
}
