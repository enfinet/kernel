#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char s[100000];int y[100000],k;void f(){int l=strlen(s);char p[1000];int j=0,i;for(i=0;s[i];){if(s[i]=='-'||isdigit(s[i])){p[j++]=s[i++];}else{if(j){p[j]='\0';y[k++]=(int)atoi(p);j=0;}i++;}}if(j){p[j]='\0';y[k++]=(int)atoi(p);j=0;}}int main(){int t;scanf("%d",&t);while(t--){k=0;int n,m;scanf("%d%d\n",&n,&m);int a[n][m];scanf("%[^\n]",s);f();int k=0,i,j;for(i=0;i<n;i++)for(j=0;j<m;j++)a[i][j]=y[k++];printf("[(");for(i=0;i<m;i++){for(j=0;j<n-1;j++)printf("%d, ",a[j][i]);if(i==m-1)printf("%d",a[j][i]);else if(j==n-1)printf("%d), (",a[j][i]);}printf(")]\n");}return 0;
}
