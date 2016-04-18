#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int x;
        scanf("%d",&x);
        if(x%2)
        printf("%d\n",x-1);
        else printf("%d\n",x);
    }
    return 0;
}
