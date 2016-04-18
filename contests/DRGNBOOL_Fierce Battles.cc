#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[103]={0};
        for(int i=0;i<n;i++) {
            int p,q;
            scanf("%d%d",&p,&q);
            a[q]+=p;
        }
        int sum=0;
        for(int i=0;i<m;i++) {
            int p,q;
            scanf("%d%d",&p,&q);
            a[q]-=p;
            if(a[q]<0) {
                sum+=a[q];
                a[q]=0;
            }
        }
        printf("%d\n",-1*sum);
    }
    return 0;
}
