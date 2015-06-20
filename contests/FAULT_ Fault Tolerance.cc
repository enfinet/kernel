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
    int n,s;
    scanf("%d%d",&n,&s);
    int num;
    int a[s][220];
    for(int i=0;i<s;i++) {
        scanf("%d",&a[i][0]);
        for(int j=1;j<=a[i][0];j++)
            scanf("%d",&a[i][j]);
    }
    printf("%d\n",s);
    for(int i=0;i<s;i++) {
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
