#include<stdio.h>
#include<fstream>
#include<iostream>
#include<cmath>
#define MOD 1000000007
using namespace std;
long long int power(long long int a,long long int b)
{
    if(b==0)return 1;
    long long int temp=power(a,b/2);
    if(b%2==0)
        return (temp*temp)%MOD;
    else return (a*temp*temp)%MOD;
}
/*long long modInverse(long long a, long long n) {
 long long i = n, v = 0ll, d = 1ll;
 while (a>0ll) {
  int t = i/a, x = a;
  a = i % x;
  i = x;
  x = d;
  d = v - t*x;
  v = x;
 }
 v %= n;
 if (v<0ll) v = (v+n)%n;
 return v;
}*/


int main()
{
    //freopen("output.txt","rt",stdout);
    int t;
    scanf("%d",&t);
    while(t--) {
        long long int n;
        //cin>>n;
        scanf("%lld",&n);
        n--;
        long long int p=power(3LL,n);
//        cout<<p<<endl;
long long int y=250000002ll;
//long long int x=500000004ll;
        long long int q=((p+2)*y)%MOD;
        long long int r=(q*12ll)%MOD;
        if(n%2)
        printf("%lld\n",r-3ll);
        else printf("%lld\n",r-9ll);
    }
    return 0;
}
