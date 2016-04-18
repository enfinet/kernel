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

int a[1000][1000];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        scanf("%d",&a[0][0]);
        //printf("%d\n",a[0][0]);
        for(int i=1;i<n;i++) {
            for(int j=0;j<=i;j++) {
                scanf("%d",&a[i][j]);
                if(j==i) {
                    a[i][j]+=a[i-1][j-1];
                } else if(j!=0) {
                    int x=a[i-1][j];
                    int y=a[i-1][j-1];
                    if(x<y)x=y;
                    a[i][j]+=x;
                }else a[i][j]+=a[i-1][j];
          //      printf("%d ",a[i][j]);
            }
            //printf("\n");
        }
        int ans=-1;
        for(int i=0;i<n;i++)
            if(ans<a[n-1][i])ans=a[n-1][i];
        printf("%d\n",ans);
    }
    return 0;
}
