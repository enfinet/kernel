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
        char a[200001];
        int hash[130]={0};
        ss(a);
        int i=0;
        while(a[i]) {
            hash[a[i]]++;
            i++;
        }
        i=0;
        ss(a);
        while(a[i]) {
            hash[a[i]]++;
            i++;
        }
        int n;
        s(n);
        while(n--) {
            ss(a);
            i=0;
            while(a[i]) {
                hash[a[i]]--;
                i++;
            }
        }
        int flag=0;
        for(int i=95;i<130;i++)
            if(hash[i]<0) {
                flag=1;
                break;
            }
        if(!flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
