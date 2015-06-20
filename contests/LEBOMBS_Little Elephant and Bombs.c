#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int l;
        scanf("%d",&l);
        char s[l];
        scanf("%s",&s);
        int i=0,count=0;
        while(i<l) {
            if(l==1 && s[i]=='0')count++;
            else if(i==0 && i+1<l && s[i]=='0' && s[i+1]=='0')
                count++;
            else if(i==l-1 && i-1>=0 && s[i-1]=='0' && s[i]=='0')
                count++;
            else if(i>0 && i<l && s[i-1]=='0' && s[i]=='0' && s[i+1]=='0')
                count++;
            i++;
        }
        printf("%d\n",count);
    }
    return 0;
}
