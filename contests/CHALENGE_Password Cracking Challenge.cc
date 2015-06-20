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
    int t,n,h;
    string s="abcdefghi";
    s(t);s(n);s(h);
    while(t--) {
        for(int i=0;i<n;i++)
            cout<<s<<endl;
        fflush(stdout);
        int x;
        cin>>x;
    }
    return 0;
}
