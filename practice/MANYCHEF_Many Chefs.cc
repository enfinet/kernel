#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
using namespace std;

void reverse(char s[],int l)
{
    for(int i=0,j=l-1;i<j;i++,j--) {
        char c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}

void check1(char s[],int i,int l)
{
    char a[]="CHEF";
        int flag=0;
        for(int j=i,k=0;j<=i+3 && j<l;j++,k++)
            if(s[j]!='?' && s[j]!=a[k]) {
                flag=1;
                break;
            }
        if(flag) {
            if(s[i]=='?')s[i]='A';
        }else {
            if(l-i<4) {
                for(int j=i,k=0;j<=i+3&&j<l;j++,k++)
                    if(s[j]=='?')s[j]='A';
            }else {
                for(int j=i,k=0;j<=i+3&&j<l;j++,k++)
                    s[j]=a[k];
            }
        }
}

void check(char s[],int i,int l)
{
    char a[]="FEHC";
        int flag=0;
        for(int j=i,k=0;j<=i+3 && j<l;j++,k++)
            if(s[j]!='?' && s[j]!=a[k]) {
                flag=1;
                break;
            }
        if(flag) {
            if(s[i]=='?')s[i]='A';
        }else {
            if(l-i<4) {
                for(int j=i,k=0;j<=i+3&&j<l;j++,k++)
                    if(s[j]=='?')s[j]='A';
            }else {
                for(int j=i,k=0;j<=i+3&&j<l;j++,k++)
                    s[j]=a[k];
            }
        }
}

void match1(char s[],int l)
{
    for(int i=0;i<l;i++) {
        check1(s,i,l);
    }
}

void match(char s[],int l)
{
    for(int i=0;i<l;i++) {
        check(s,i,l);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    char s[2020],r[2020];
    while(t--) {
        scanf("%s",s);
        strcpy(r,s);
        int l=strlen(s);
        match1(r,l);
        reverse(s,l);
        match(s,l);
        reverse(s,l);
        if(strcmp(s,r)<0)
            printf("%s\n",s);
        else printf("%s\n",r);
    }
    return 0;
}
