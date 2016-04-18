#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>

#include <iostream>
#include <fstream>
#include <sstream>
#include <istream>
#include <ostream>
#include <iomanip>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

#include <bitset>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>

using namespace std;

#define null 0
#define MOD 1000000007

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%lld",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%lld",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl()        printf("\n");
#define sp()        printf(" ");

int main()
{
    int n;
    s(n);
    int num;
    while (n--) {
        s(num);
        int four=num/7;
        int seven=num%7;
        int flag=0,ans;
        if (seven%4==0) {
            ans=four*7;
        } else {
            while (four) {
                seven+=7;
                four--;
                if (seven%4==0) {
                    flag=1;
                    ans=four*7;
                    break;
                }
            }
            if(!flag)ans=-1;
        }
        if(num%4==0 and ans==-1)
            ans=0;
        p(ans);
        nl();
    }
    return 0;
}
