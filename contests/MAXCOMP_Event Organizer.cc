#include<algorithm>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node
{
  int a;
  int b;
  int c;
};

bool cmp(struct node n1,struct node n2)
{
    return ((n1.b<n2.b)||(n1.b==n2.b && n1.a<n2.a));
}

struct node arr[2005];
int mxs[2005];

int maxLength(int n)
{
   int i, j, mx = -1;

   for ( i = 0; i < n; i++ )
      mxs[i] = arr[i].c;

   for ( i = 1; i < n; i++ )
      for ( j = 0; j < i; j++ )
         if ( arr[i].a >= arr[j].b && mxs[i] < mxs[j] + arr[i].c)
            mxs[i] = mxs[j] + arr[i].c;

   for ( i = 0; i < n; i++ )
      if( mx < mxs[i] )
         mx = mxs[i];

   return mx;
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d%d%d",&arr[i].a,&arr[i].b,&arr[i].c);
        }
        sort(arr,arr+n,cmp);
        printf("%d\n",maxLength(n));
    }
    return 0;
}
