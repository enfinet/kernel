#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int binary(int *a,int n)
{
    int i=0;
    while(n) {
        if(n%2)a[i++]=1;
        else a[i++]=0;
        n/=2;
    }
    return i;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int x,y;
        scanf("%d%d",&x,&y);
        int a[x];
        for(int i=0;i<x;i++)
            scanf("%d",&a[i]);
        int n=(int)pow(2.0,(double)x),sum;
        int f=0;
        for(int i=1;i<n;i++) {
            sum=0;
            int j=0;
            int b[x];
            int l=binary(b,i);
            /*for(int i=0;i<l;i++)
                cout<<b[i]<<" ";
            cout<<endl;*/
            while(j<l) {
                if(b[j])
                    sum+=a[j];
                j++;
            }
            if(sum==y) {
                f=1;
                printf("Yes\n");
                break;
            }
        }
        if(!f)printf("No\n");
    }
    return 0;
}
