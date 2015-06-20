#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int m,n;
        scanf("%d%d",&m,&n);
        int a[m][n];
        int max[500][2];
        int min[500][2];
        int i,j,mx=-1,k=0;
        for(i=0;i<m;i++) {
            for(j=0;j<n;j++) {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<m;i++) {
            mx=-1;
            for(j=0;j<n;j++) {
                if(mx<a[i][j]){
                    mx=a[i][j];
                    max[k][0]=i;
                    max[k][1]=j;
                }
            }
            k++;
        }
        k=0;
        int mn=999999999;
        for(i=0;i<n;i++) {
            mn=999999999;
            for(j=0;j<m;j++) {
                if(mn>a[j][i]){
                    mn=a[j][i];
                    min[k][0]=j;
                    min[k][1]=i;
                }
            }
            k++;
        }
        int f=0;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++) {
                if(!f && max[i][0]==min[j][0] && max[i][1]==min[j][1] ) {
                        printf("%d\n",a[max[i][0]][max[i][1]]);
                        f=1;
                }
            }
        if(!f)printf("-1\n");
    }
    return 0;
}
