#include<iostream>
#include<cstdio>
using namespace std;

int a[10000005];

int main()
{
    int i=1,k=0;
    a[0]=1,a[1]=2,a[2]=2;
    while(i<=25474 && k<10000001) {
        for(int j=1;j<=a[i-1] && k<10000001;j++)
            a[k++]=i;
        i++;
    }
    //cout<<k<<endl;
    /*for(int i=0;i<15;i++)
        cout<<a[i]<<" ";
    cout<<endl;*/
    int n;
    scanf("%d",&n);
    while(n--) {
        int num;
        scanf("%d",&num);
        printf("%d\n",a[num-1]);
    }
    return 0;
}
