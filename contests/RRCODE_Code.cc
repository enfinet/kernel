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

#define nl        printf("\n");
#define sp        printf(" ");
#define mx	100

int main()
{
    int t;
    s(t);
    while (t--) {
        int n,k,ans;
        s(n);
        s(k);
        s(ans);
        int arr[n];
        for(int i=0; i<n; i++)
            s(arr[i]);
        char str[5];
        ss(str);
        if(k) {
            int num;
            if(str[0]=='X') {
                num=arr[0];
                for(int i=1; i<n; i++) {
                    num^=arr[i];
                }
                if(k%2)ans^=num;
            } else if(str[0]=='A') {
                num=arr[0];
                for(int i=1; i<n; i++) {
                    num&=arr[i];
                }
                ans&=num;
            } else {
                num=arr[0];
                for(int i=1; i<n; i++) {
                    num|=arr[i];
                }
                ans|=num;
            }
        }
        p(ans);
        nl;
    }
    return 0;
}
