#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
using namespace std;

void swap(int *a,int *b)
{
    int x=*a;
    *a=*b;
    *b=x;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int m=0,n=1,max=a*100+b;
        while((b>=c || a>0) && n<=10000 ) {
            if(b>=c) {
                b-=c;
                swap(&a,&b);
                if(max< a*100+b) {
                    max=a*100+b;
                    m=n;
                }
            } else if(b<c && a>0) {
                a--;
                b=100-c+b;
                swap(&a,&b);
                if(max< a*100+b) {
                    max=a*100+b;
                    m=n;
                }
            }
            n++;
        }
        printf("%d\n",m);
    }
    return 0;
}
