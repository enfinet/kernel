#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        char s[1200];
        scanf("%s",s);
        int i=strlen(s)-1,c=0,f=0;
        int r=i+1,count=0;
        while(i>=0) {
            if(s[i]=='4') {
                s[i]='7';
                c=1;
                break;
            }else if(s[i]=='7') {
                s[i]='4';
                count++;
            }
            i--;
        }
        if(count==r && i==-1) {
            printf("4");
            i=0;
            while(i<=r-1) {
                s[i]='4';
                i++;
            }
        }
        printf("%s\n",s);
    }
    return 0;
}
