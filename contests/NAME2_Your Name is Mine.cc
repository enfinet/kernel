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

int main()
{
    int t;
    s(t);
    while(t--) {
        char a[250001],b[250001];
        ss(a);
        ss(b);
        int m=strlen(a);
        int n=strlen(b);
        if(m==n) {
            if(strcmp(a,b)==0) {
                printf("YES\n");
            } else printf("NO\n");
        } else if(m<n) {
            int j=0,flag=0;
            for(int i=0; a[i];) {
                if(j>=n) {
                    flag=1;
                    break;
                }
                if(a[i]==b[j]) {
                    i++;
                }
                j++;
            }
            if(!flag)printf("YES\n");
            else printf("NO\n");
        } else {
            int j=0,flag=0;
            for(int i=0; b[i];) {
                if(j>=m) {
                    flag=1;
                    break;
                }
                if(b[i]==a[j]) {
                    i++;
                }
                j++;
            }
            if(!flag)printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
