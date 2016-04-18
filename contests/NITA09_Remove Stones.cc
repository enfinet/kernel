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
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    string s;
    cin>>s;
    int count=0;
    char c=s[0];
    for(int i=1;i<n;i++) {
        if(s[i]==c)
            count++;
        else c=s[i];
    }
    printf("%d\n",count);
    return 0;
}
