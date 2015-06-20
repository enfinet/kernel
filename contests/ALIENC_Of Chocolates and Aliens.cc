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

#define MOD 1000000009

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        long long x;
        scanf("%lld",&x);
        //if(x==1ll)printf("No\n");
        //else {
        if(x&(x-1ll)){
            printf("Yes\n");
        }else printf("No\n");
    //    }
    }
    return 0;
}
