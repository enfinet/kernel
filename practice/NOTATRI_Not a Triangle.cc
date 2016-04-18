#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int bsearch(int a[],int start,int end,int num)
{
    if(start>end)return 0;
    int mid=(start+end)/2;
    if(start<=end) {
        if(a[mid]>num && a[mid-1]<=num) return mid;
        else if(a[mid]>num && a[mid-1]>num) return bsearch(a,start,mid-1,num);
        else  return bsearch(a,mid+1,end,num);
        //else return bsearch(a,mid+1,end);if(a[mid]<=num)
    }else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n) {
        int count=0;
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++) {
                int index=bsearch(a,j+1,n,a[i]+a[j]);
                if(index)
                count+=(n-index);
            }
        printf("%d\n",count);
        scanf("%d",&n);
    }
    return 0;
}
