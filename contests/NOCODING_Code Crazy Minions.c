#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        char a[1002];
        scanf("%s",a);
        int i=1,sum=1;
        while(a[i]) {
            if(a[i]>a[i-1])sum+=a[i]-a[i-1];
            else if(a[i]<a[i-1])sum+=(122-a[i-1]+a[i]-97)+1;
            i++;
        }
        sum+=i;
        int l=i*11;
        if(sum<=l)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
