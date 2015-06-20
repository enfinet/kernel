#include <iostream>
#include<cstdio>
using namespace std;
#define s(a)        scanf("%d",&a)
#define sl(a)       scanf("%lld",&a)
#define pl(a)       printf("%lld",a)
#define nl        printf("\n");
#define sp        printf(" ");
typedef long long ll;
int main()
{
    int t;
    s(t);
    while(t--) {
        ll n;
        sl(n);
        ll m=-1*n;
        pl(-1*(m^n));
        nl;
    }
    return 0;
}
