#include<stdio.h>
#define MOD 1000000007
int pow(int a,int b)
{
    if(b==0)return 1;
    long long int temp=power(a,b/2);
    if(b%2==0)
        return (temp*temp);
    else return (a*temp*temp);
}
int power(int a,int b)
{
    if(b==0)return 1;
    long long int temp=power(a,b/2);
    if(b%2==0)
        return (temp*temp)%MOD;
    else return (a*temp*temp)%MOD;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int a,b;
        scanf("%d%d",&a,&b);
        int p=b-2000;
        int q=pow(2,p);
        int ans=power(a,q);
        printf("%d\n",ans);
    }
    return 0;
}
