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

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%lld",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)
#define p(a)        printf("%d\n",a)
#define pc(a)       printf("%c\n",a)
#define pl(a)       printf("%lld\n",a)
#define pd(a)       printf("%lf\n",a)
#define ps(a)       printf("%s\n",a)
//#define for(i,n)    for(;i<=n;i++)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int main()
{
    int t;
    s(t);
    while(t--) {
        char s[10000];
        ss(s);
        int a[125]={0},b[125]={0};
        int i=0,j=strlen(s)-1;
        for(;i<j;i++,j--) {
            a[s[i]]++,b[s[j]]++;
        }
        int flag=0;
        for(int i=97;i<123;i++) {
            if(a[i]!=b[i]) {
                flag=1;
                break;
            }
        }
        if(flag) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}
