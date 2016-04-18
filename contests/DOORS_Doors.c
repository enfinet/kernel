#include<stdio.h>
#include<math.h>
/*int bsearch(int num,int start,int end)
{
    int mid=(start+end)/2;
    if(start<=end) {
        if(num==(mid*mid))
            return mid;
        else if(num<(mid*mid) && num>((mid-1)*(mid-1)))
            return mid-1;
        else if(num>(mid*mid))
            return bsearch(num,mid+1,end);
        else return bsearch(num,start,mid-1);
    }
}*/
int main()
{
    int t;
    scanf("%d",&t);
        while(t--) {
            int n;
            scanf("%d",&n);
            //int ind=bsearch(n,1,10001);
            printf("%d\n",(int)sqrt(n));
        }
    return 0;
}
