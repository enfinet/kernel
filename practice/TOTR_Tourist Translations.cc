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

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

char mp[150];

int main()
{
    int n;
    s(n);
    char m[50];
    ss(m);
    int num=65;
    for(int i=0; m[i]; i++) {
        mp[num+32]=m[i];
        mp[num]=(char)m[i]-(char)32;
        num++;
    }
    while(n--) {
        char a[150];
        ss(a);
        int l=strlen(a);
        for(int i=0; i<l; i++) {
            if(isalpha(a[i])) {
                a[i]=mp[a[i]];
            } else if(a[i]=='_') {
                a[i]=' ';
            }
        }
        ps(a);
        nl;
    }
    return 0;
}
