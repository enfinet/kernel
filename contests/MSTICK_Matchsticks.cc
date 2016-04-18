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
#define pd(a) printf("%.1lf\n",a)
#define ps(a) printf("%s\n",a)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

#define MAXIND 100000001
#define MAXN 1000001

int M[MAXIND];

void initialize(int node, int b, int e, int A[MAXN], int N)
{
    if (b == e)
        M[node] = b;
    else {
        initialize(2 * node, b, (b + e) / 2, A, N);
        initialize(2 * node + 1, (b + e) / 2 + 1, e, A, N);
        if (A[M[2 * node]] <= A[M[2 * node + 1]])
            M[node] = M[2 * node];
        else
            M[node] = M[2 * node + 1];
    }
}

int query(int node, int b, int e, int A[MAXN], int i, int j)
{
    int p1, p2;
    if (i > e || j < b)
        return -1;
    if (b >= i && e <= j)
        return M[node];
    p1 = query(2 * node, b, (b + e) / 2, A, i, j);
    p2 = query(2 * node + 1, (b + e) / 2 + 1, e, A, i, j);
    if (p1 == -1)
        return p2;
    if (p2 == -1)
        return p1;
    if (A[p1] <= A[p2]) {
        return p1;
    }
    return p2;
}

int R[MAXIND];

void initialize1(int node, int b, int e, int A[MAXN], int N)
{
    if (b == e)
        R[node] = b;
    else {
        initialize1(2 * node, b, (b + e) / 2, A, N);
        initialize1(2 * node + 1, (b + e) / 2 + 1, e, A, N);
        if (A[R[2 * node]] >= A[R[2 * node + 1]])
            R[node] = R[2 * node];
        else
            R[node] = R[2 * node + 1];
    }
}

int query1(int node, int b, int e, int A[MAXN], int i, int j)
{
    int p1, p2;
    if (i > e || j < b)
        return -1;
    if (b >= i && e <= j)
        return R[node];
    p1 = query1(2 * node, b, (b + e) / 2, A, i, j);
    p2 = query1(2 * node + 1, (b + e) / 2 + 1, e, A, i, j);
    if (p1 == -1)
        return p2;
    if (p2 == -1)
        return p1;
    if (A[p1] >= A[p2]) {
        return p1;
    }
    return p2;
}

int main()
{
    int n;
    s(n);
    int a[n];
    for(int i=0; i<n; i++)
        s(a[i]);
    initialize(1,0,n-1,a,n);
    initialize1(1,0,n-1,a,n);
    int q;
    s(q);
    while(q--) {
        int l,r;
        s(l);
        s(r);
        int ans1=query1(1,0,n-1,a,0,l-1);
        int ans2=query1(1,0,n-1,a,r+1,n-1);
        double max=0.0;
        if(ans1!=-1)
            max=(double)a[ans1];
        if(ans2!=-1 && max<(double)a[ans2])max=(double)a[ans2];
        int ans3=query1(1,0,n-1,a,l,r);
        int ans4=query(1,0,n-1,a,l,r);
        max+=(double)a[ans4];
        double max1=(double)a[ans4]+((double)a[ans3]-(double)a[ans4])/2.0;
        if(max1>max)max=max1;
        pd(max);
    }
    return 0;
}
