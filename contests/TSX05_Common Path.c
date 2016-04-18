#include<stdio.h>
int eve(int n){
    if(n%2) {
        n--;
        n/=2;
    }else {
        n/=2;
    }
    return n;
}
int main()
{
    int t,n;
    scanf("%d%d",&t,&n);
    while(t--) {
        int a,b;
        scanf("%d%d",&a,&b);
        int x;
        if(a>b) {
            x=a;
            a=b;
            b=x;
        }
            while(b>a) {
                if(b%2) {
                    b--;
                    b/=2;
                }else {
                    b/=2;
                }
            }
            int q[10000],i=0;
            while(a>=1 &&b>=1) {
                if(a==b)
                    q[i++]=a;
                if(a>b) {
                    a=eve(a);
                }else if(a<b) b=eve(b);
                else {
                    a=eve(a);
                    b=eve(b);
                }
            }
            i--;
            while(i>=0) {
                if(q[i])
                printf("%d ",q[i]);
                i--;
            }
            printf("\n");
    }
    return 0;
}
