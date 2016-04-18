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
    int m,t;
    scanf("%d%d",&m,&t);
    int a[m][m];
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
        }
        for(int j=0;j<=m-t;j++) {
            int min=a[i][j];
            for(int k=j+1;k<t+j;k++) {
                    if(min>a[i][k])min=a[i][k];
            }
            a[i][j]=min;
        }
    }
    for(int i=0;i<=m-t;i++) {
        for(int j=0;j<=m-t;j++) {
            int min=a[i][j];
            for(int k=i+1;k<t+i;k++) {
                    if(min>a[k][j])min=a[k][j];
            }
            printf("%d ",min);
        }
        printf("\n");
    }
    return 0;
}
