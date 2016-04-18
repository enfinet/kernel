#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>
#include<limits.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,c;
        scanf("%d%d",&n,&c);
        int sum=0,num;
        while(n--) {
            scanf("%d",&num);
            sum+=num;
        }
        if(sum<=c)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
