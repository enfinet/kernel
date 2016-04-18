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
        int p,s;
        scanf("%d%d",&p,&s);
        double h=(double)p-(double)sqrt((double)p*(double)p-24.0*(double)s);
        h/=12.0;
        double ans=(double)s*(double)h*2.0+4.0*(double)h*(double)h*(double)h-(double)p*(double)h*(double)h;
        ans/=4.0;
        printf("%.2f\n",ans);
    }
    return 0;
}
