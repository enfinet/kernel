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
    while(t--)
    {
        long long a[]= {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
        long long k;
        scanf("%lld",&k);
        if(k%2ll)
        {
            if(k==1ll)printf("1\n");
            else
            {
                int i=0;
                while(a[i]<k)i++;
                i--;
                long long ans=a[i];
                i--;
                for(; i>=0; i--)
                {
                    if(ans>k)
                    {
                        ans-=a[i];
                        printf("1");
                    }
                    else
                    {
                        ans+=a[i];
                        printf("2");
                    }
                }
                printf("\n");
            }
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
