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
        int n,m;
        scanf("%d%d",&n,&m);
        int map[1000]={0};
        int a[m],b[m];
        for(int i=0;i<m;i++)
            scanf("%d%d",&a[i],&b[i]);
        int c[1000],j=0;
        for(int i=m-1;i>=0;i--) {
            if(!map[a[i]]&&!map[b[i]]) {
                map[a[i]]=1;
                map[b[i]]=1;
                c[j++]=i;
            }
        }
        for(int i=j-1;i>=0;i--)
            printf("%d ",c[i]);
        printf("\n");
    }
    return 0;
}
