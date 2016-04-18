#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int a[n];
        int min1=1000000001;
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for(int i=1;i<n;i++)
            if(min1>a[i]-a[i-1])min1=a[i]-a[i-1];
        printf("%d\n",min1);
    }
    return 0;
}
