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

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--) {
        char s[320];
        gets(s);
        int a[130]={0};
        for(int i=0;s[i];i++) {
            if(s[i]>=65 && s[i]<=90) {
                a[s[i]]++;
                a[s[i]+32]++;
            }
            if(s[i]>=97 && s[i]<=122) {
                a[s[i]]++;
                a[s[i]-32]++;
            }
        }
        int flag=0;
        for(int i=65;i<91;i++)
            if(!a[i]) {
                printf("%c\n",i);
                flag=1;
                break;
            }
        if(!flag)printf("~\n");
    }
    return 0;
}
