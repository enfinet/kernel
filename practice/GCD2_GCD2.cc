#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

#define s(a) scanf("%d",&a)
#define p(a) printf("%d\n",a)

char a[500];
int b;
char s[1000];
char ans[500];

int divide(int b)
{
    if(b==0) {
        return 0;
    } else {
        int l=strlen(s);
        int a=0;
        int i,j;
        for(i=0; i<l&&a<b; i++) a=a*10+s[i]-'0';
        i--;
        a/=10;
        for(j=0; i<l; i++,j++) {
            a=a*10+s[i]-'0';
            ans[j]=a/b+'0';
            a%=b;
        }
        ans[j]=0;
        return a;
    }
}

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main()
{
    int t;
    s(t);
    while(t--) {
        cin>>b>>s;
        if(b==0) {
            cout<<s<<endl;
        } else {
            int an=divide(b);
            an=gcd(an,b);
            p(an);
        }
    }
    return 0;
}
