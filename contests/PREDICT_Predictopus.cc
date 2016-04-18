#include<stdio.h>
#define s(a)       scanf("%d",&a)
#define sd(a)       scanf("%lf",&a)
#define pd(a)       printf("%lf\n",a)
int main()
{
    int t;
    s(t);
    while(t--) {
        double p;
        sd(p);
        if(p<0.5)p=1.0-p;
        pd((1.0-p)*p*20000.0+p*10000.0);
    }
    return 0;
}
