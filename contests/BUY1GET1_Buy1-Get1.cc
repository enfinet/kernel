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

#define MOD 1000000007
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        string s;
        int a[150]={0};
        cin>>s;
        int i=0;
        while(s[i]){
            a[s[i]]++;
            i++;
        }
        i=0;
        int count=0;
        while(i<150){
            if(a[i])count+=(int)ceil((double)a[i]/2.0);
            i++;
        }
        printf("%d\n",count);
    }
    return 0;
}
