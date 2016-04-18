#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int count=0;
    int num;
    while(n--) {
        scanf("%d",&num);
        if(num%k==0)count++;
    }
    printf("%d\n",count);
    return 0;
}
