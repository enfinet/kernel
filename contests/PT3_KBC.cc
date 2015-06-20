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
        int sum=0;
        int a[n],b[n];
        int c[n];
        b[0]=1;
        c[n-1]=1;
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            if(i>=1) {
                if(a[i] > a[i-1]) {
                    b[i]=b[i-1]+1;
                } else {
                    b[i]=1;
                }
            }
        }
        sum=max(b[n-1],c[n-1]);
        for(int i=n-2;i>=0;i--) {
            if(a[i] > a[i+1]) {
                c[i]=c[i+1]+1;
            } else {
                c[i]=1;
            }
            sum+=max(c[i],b[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
