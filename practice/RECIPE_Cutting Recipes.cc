#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int a[n],num;
        scanf("%d",&a[0]);
        num=a[0];
        for(int i=1;i<n;i++) {
            scanf("%d",&a[i]);
            num=gcd(num,a[i]);
        }
        for(int i=0;i<n;i++) {
            printf("%d ",a[i]/num);
        }
        printf("\n");
    }
    return 0;
}
