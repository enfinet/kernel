#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
int main()
{
    int n,m,a;
    scanf("%d%d%d",&n,&m,&a);
    int x=(int)ceil((double)n/(double)a),y=(int)ceil((double)m/(double)a);
    printf("%d\n",x*y);
    return 0;
}
