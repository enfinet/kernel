#include<stdio.h>
#define MOD 1000000007

long long mulmod(long long a,long long b){
    long long x = 0,y=a%MOD;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%MOD;
        }
        y = (y*2)%MOD;
        b /= 2;
    }
    return x%MOD;
}

long long por(long long n)
{
    if(n==0)return 1;
    int temp=por(n/2);
    if(n%2==0)
        return mulmod(temp,temp);
    else return mulmod(2*temp,temp);
}
/*int por(int n)
{
    int x=1000000007;
    int ans=1;
    while(n--) {
        ans*=2;
        ans%=x;
    }
    return ans%x;
}*/
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        long long n;
        scanf("%lld",&n);
        //printf("val:%d\n",n+1);
        long long m,ans;
        if(n%2) {
            m=(n+1)/2;
            ans=((por(m+1))%MOD)-2;
            //printf("POR1:%lld\n",ans+2);
        } else {
            m=n/2;
            ans=((3*por(m))%MOD)-2;
            //printf("POR2:%lld\n",(ans+2)/3);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
