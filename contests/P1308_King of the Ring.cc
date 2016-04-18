#include<iostream>
#include<cstdio>
using namespace std;

int g(int n,int k)
{
    if(n==1)return 0;
    else return (g(n-1,k)+k)%n;
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int ans=g(n,k);
    printf("%d\n",ans+1);
    return 0;
}
