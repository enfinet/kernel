#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

int main()
{
    int t;
    s(t);
    while(t--) {
        int m,n;
        s(m);s(n);
        int flag=0;
        char col[n][m+1];
        char temp[105][105];
        int i,j;
        for(i=0;i<m;i++) {
            ss(temp[i]);
            for(j=0;j<n;j++)
                if(isupper(temp[i][j]))temp[i][j]=tolower(temp[i][j]);
        }
        for(i=0;i<m;i++) {
            for(j=0;j<n;j++) {
                if(j+5<=n && temp[i][j]=='s' && temp[i][j+1]=='p' && temp[i][j+2]=='o' && temp[i][j+3]=='o' && temp[i][j+4]=='n') {
                    flag=1;
                    break;
                }
                if(i+5<=m && temp[i][j]=='s' && temp[i+1][j]=='p' && temp[i+2][j]=='o' && temp[i+3][j]=='o' && temp[i+4][j]=='n') {
                    flag=1;
                    break;
                }
            }
            if(flag)break;
        }
        if(flag)printf("There is a spoon!\n");
        else printf("There is indeed no spoon!\n");
    }
    return 0;
}
