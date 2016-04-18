#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    while(n--) {
        char s[200],t[200];
        int a[150]={0};
        scanf("%s",s);
        int p=strlen(s);
        //printf("%d_",p);
        scanf("%s",t);
        int q=strlen(t);
        int i,count=0;
        for(i=0;i<p;i++)a[s[i]]++;
        for(i=0;i<q;i++){
            if(a[t[i]]){
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
