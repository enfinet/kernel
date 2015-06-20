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
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    int flag=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i][0]);
        for(int j=1;j<m;j++) {
            scanf("%d",&a[i][j]);
            if(a[i][0]!=a[i][j])flag=1;
        }
    }
    if(!flag) {
        for(int i=1;i<n;i++) {
            if(a[i][0]==a[i-1][0]) {
                flag=1;
                break;
            }
        }
        if(flag)printf("NO\n");
        else printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
