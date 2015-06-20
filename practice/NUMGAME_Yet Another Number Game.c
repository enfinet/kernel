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
    while(t--){
        int num;
        scanf("%d",&num);
        if(num%2)printf("BOB\n");
        else printf("ALICE\n");
    }
    return 0;
}
