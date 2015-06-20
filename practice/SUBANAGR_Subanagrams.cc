#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>
using namespace std;

#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int cnt[110][150];
int cr[150];

int main()
{
    int t;
    s(t);
    int j=0;
    while(t--) {
        char s[150];
        ss(s);
        int i=0;
        while(s[i]) {
            cnt[j][s[i]]++;
            i++;
        }
        j++;
    }
    for(int i=97; i<123; i++) {
        int min=INT_MAX;
        for(int k=0; k<j; k++) {
            if(min>cnt[k][i]) {
                min=cnt[k][i];
            }
        }
        cr[i]=min;
    }
    char ans[110];
    int l=0;
    for(int i=97; i<123; i++)
        if(cr[i] && cr[i]!=INT_MAX) {
            while(cr[i]) {
                ans[l++]=(char)i;
                cr[i]--;
            }
        }
    ans[l]='\0';
    if(!l) {
        printf("no such string\n");
    } else
        ps(ans);
    return 0;
}
