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
    int t;
    scanf("%d",&t);
    while(t--) {
        int ds,dt,d;
        scanf("%d%d%d",&ds,&dt,&d);
        if(ds+dt<=d) printf("%lf\n",(double)d-(double)ds-(double)dt);
        else if(ds+d<=dt)printf("%lf\n",(double)dt-(double)ds-(double)d);
        else if(d+dt<=ds) printf("%lf\n",(double)ds-(double)d-(double)dt);
        else printf("0\n");
    }
    return 0;
}

