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

void base(int a,int n,int k)
{
    int arr[k],i=0;
    n++;
    while(a && i<k) {
        arr[i]=a%n;
        a/=n;
        i++;
    }
    while(i<k)
        arr[i++]=0;
    for(int i=0;i<k;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int main()
{
    int a,n,k;
    scanf("%d%d%d",&a,&n,&k);
    base(a,n,k);
    return 0;
}
