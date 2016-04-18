#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d\n",&t);
    char s[2020];
    while(t--) {
        gets(s);
        int l=(int)strlen(s)-1;
        int i;
        for(i=l;i>=0;i--) {
            if(i-3>=0 && (s[i]=='?'||s[i]=='F') && (s[i-1]=='?'||s[i-1]=='E') && (s[i-2]=='?'||s[i-2]=='H') && (s[i-3]=='?'||s[i-3]=='C')) {
                s[i]='F';
                s[i-1]='E';
                s[i-2]='H';
                s[i-3]='C';
                i-=3;
            } else {
                if(s[i]=='?')s[i]='A';
            }
        }
        puts(s);
    }
    return 0;
}
