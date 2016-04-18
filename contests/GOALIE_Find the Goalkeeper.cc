#include<iostream>
#include<cstdio>
using namespace std;
int bsearch(int a[],int num,int start,int end)
{
    int mid=(start+end)/2;
    if(start<=end) {
        if(num<a[mid] && num>a[mid-1])
            return a[mid-1];
        else if(num>a[mid])
            return bsearch(a,num,mid+1,end);
        else return bsearch(a,num,start,mid-1);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216};
    while(t--) {
        int n;
        scanf("%d",&n);
        if((n&(n-1))==0)
            printf("1\n");
        else
        {
            int num=bsearch(a,n,0,26);
            int x=n-num;
            printf("%d\n",2*x+1);
        }
    }
    return 0;
}
