#include <stdio.h>
#include <math.h>

  int power(  int a,  int b)
{
    if(b==0)return 1;
      int temp=power(a,b/2);
    if(b%2==0)
        return temp*temp;
    else return a*temp*temp;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int k;
        scanf("%d",&k);
        int s=(int)power(2,n);
        int p=s-1;
        if((k-p)%s == 0)printf("ON\n");
        else printf("OFF\n");
    }
    return 0;
}
