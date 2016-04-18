#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<map>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int ans,num;
        scanf("%d",&ans);
        n--;
        while(n--){
            scanf("%d",&num);
            ans=gcd(num,ans);
        }
        if(ans==1)printf("-1\n");
        else {
            int x;
            for(int i=2;i*i<=ans;i++)
                if(ans%i==0){
                    ans=i;
                    break;
                }
            printf("%d\n",ans);
        }
    }
    return 0;
}
