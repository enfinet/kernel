
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

#define MOD 1000000007
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int t;
        scanf("%d",&t);
        int a[t];
        for(int i=0; i<t; i++)
            scanf("%d",&a[i]);
        int i;
        for(i=t-2; i>=0; i--)
            if(a[i]>a[i+1])
                break;
        printf("%d\n",i+1);
    }
    return 0;
}
