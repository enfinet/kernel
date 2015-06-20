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

int a[2501],b[2501];
char c[2501];

int k=0;
int main()
{
    int n;
    scanf("%d",&n);
    string s[n];
    int count=0;
    for(int i=0;i<n;i++) {
        cin>>s[i];
        int j=0;
        while(s[i][j]) {
            if(s[i][j]!='W') {
                count++;
                a[k]=i,b[k]=j;
                c[k]=s[i][j];
                k++;
            }
            j++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++)
        printf("%d %d %d %d %c\n",a[i],b[i],a[i],b[i],c[i]);
    return 0;
}
