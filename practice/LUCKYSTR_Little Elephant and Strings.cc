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
        int n,m;
        scanf("%d%d",&n,&m);
        string s[51];
        for(int i=0;i<n;i++)
            cin>>s[i];
        string a[51];
        for(int i=0;i<m;i++)
            cin>>a[i];
        for(int i=0;i<m;i++) {
            if(a[i].length()>=47) {
                printf("Good\n");
            }else {
                int flag=0;
                for(int j=0;j<n;j++) {
                    if(a[i].find(s[j])!=string::npos) {
                        flag=1;
                        break;
                    }
                }
                if(flag) printf("Good\n");
                else printf("Bad\n");
            }
        }
    return 0;
}
