#include<stdio.h>
#define MOD 1000000007
/*long long mulmod(long long a,long long b){
    long long x = 0,y=a%MOD;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%MOD;
        }
        y = (y*2)%MOD;
        b /= 2;
    }
    return x%MOD;
}*/

long long por(long long n)
{
    if(n==0ll)return 1ll;
    long long temp=por(n/2ll);
    if(n%2ll==0ll)
        return (temp*temp)%MOD ;
    else return (2ll*temp*temp)%MOD;
}
/*
long long tri(long long n)
{
    if(n==0 || n==1)return 0;
    else if(n==2)return 1;
    else return (tri(n-1) + tri(n-2) + tri(n-3))%MOD;
}
*/
void multiply(long long F[3][3], long long M[3][3])
{
  long long a =  ((F[0][0]*M[0][0]) + (F[0][1]*M[1][0])+(F[0][2]*M[2][0]))%MOD;
  long long b =  ((F[0][0]*M[0][1]) + (F[0][1]*M[1][1])+(F[0][2]*M[2][1]))%MOD;
  long long c =  ((F[0][0]*M[0][2]) + (F[0][1]*M[1][2])+(F[0][2]*M[2][2]))%MOD;
  long long d =  ((F[1][0]*M[0][0]) + (F[1][1]*M[1][0])+(F[1][2]*M[2][0]))%MOD;
  long long e =  ((F[1][0]*M[0][1]) + (F[1][1]*M[1][1])+(F[1][2]*M[2][1]))%MOD;
  long long f =  ((F[1][0]*M[0][2]) + (F[1][1]*M[1][2])+(F[1][2]*M[2][2]))%MOD;
  long long i =  ((F[2][0]*M[0][0]) + (F[2][1]*M[1][0])+(F[2][2]*M[2][0]))%MOD;
  long long j =  ((F[2][0]*M[0][1]) + (F[2][1]*M[1][1])+(F[2][2]*M[2][1]))%MOD;
  long long k =  ((F[2][0]*M[0][2]) + (F[2][1]*M[1][2])+(F[2][2]*M[2][2]))%MOD;

  F[0][0] = a;
  F[0][1] = b;
  F[0][2] = c;
  F[1][0] = d;
  F[1][1] = e;
  F[1][2] = f;
  F[2][0] = i;
  F[2][1] = j;
  F[2][2] = k;
}

void power(long long F[3][3], long long n)
{
  if( n == 0ll || n == 1ll)
      return;
  long long M[3][3] = {{0ll ,1ll ,0ll} , {0 ,0 ,1} , {1, 1, 1}};

  power(F, n/2ll);
  multiply(F, F);

  if( n%2ll != 0ll )
     multiply(F, M);
}
long long fib(long long n)
{
  long long F[3][3] =  {{0 ,1 ,0} , {0 ,0 ,1} , {1, 1, 1}};
  if(n == 0ll)
    return 0ll;
  power(F, n-1);
  return F[0][0];

}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        long long n;
        scanf("%lld",&n);
        long long x=por(n);
        long long z=fib(n+5ll);
        long long y;
        if(x<z)
         y=(x+MOD)-z;
        else
        y=x-z;
        printf("%lld\n",y%MOD);
    }
    return 0;
}
