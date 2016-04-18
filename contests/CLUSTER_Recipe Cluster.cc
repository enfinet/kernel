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
    int t;
    scanf("%d",&t);
    while(t--) {
        string m,s;
        cin>>m;
        int l=m.size();
        int n;
        scanf("%d",&n);
        map<string,int> mp;
        while(n--) {
            cin>>s;
            int len=s.size();
            if(len>=l) {
                int f=s.find(m);
                if(f==0)mp[s]=1;
            }
        }
        if(!mp.empty()) {
            map<string,int> ::iterator it=mp.begin();
            cout<<it->first<<endl;
        } else cout<<m<<endl;
    }
    return 0;
}
