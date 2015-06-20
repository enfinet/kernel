#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int k;
        scanf("%d",&k);
        if(n && k) {
            int l=(n-ceil((double)n/2.0))+(k-ceil((double)k/2.0));
            printf("%d\n",l+1);
        }else {printf("0\n");}
    }
    return 0;
}
