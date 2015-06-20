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
        int a[n];
        int count1=0,count2=0;
        scanf("%d",&a[0]);
        for(int i=1;i<n;i++) {
            scanf("%d",&a[i]);
            if(a[i]<a[i-1])count1++;
        }
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if(a[i]>a[j])count2++;
        if(count1==count2)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
