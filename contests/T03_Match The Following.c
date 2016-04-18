#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m;
        scanf("%d",&m);
        int a[m],b[m];
        int x,y;
        int sum=0,i;
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&x,&y);
            int j;
            for(j=0;j<i;j++) {
                if(x<a[j] && y>b[j])sum++;
                if(x>a[j] && y<b[j])sum++;
            }
            a[i]=x;b[i]=y;
        }
        printf("%d\n",sum);
    }
    return 0;
}
