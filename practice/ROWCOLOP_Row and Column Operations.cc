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

int a[314160],b[314160];

int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    int maxR=0,maxC=0;
    int N,x;
    string s;
    while(q--) {
        cin>>s;
        scanf("%d%d",&N,&x);
        if(s[0]=='R') {
            a[N]+=x;
            if(maxR<a[N])maxR=a[N];
        } else {
            b[N]+=x;
            if(maxC<b[N])maxC=b[N];
        }
    }
    printf("%d\n",maxR+maxC);
    return 0;
}
