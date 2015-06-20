#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        map<string ,int> mp;
        int n;
        scanf("%d",&n);
        string s;
        char c;
        while(n--) {
            cin>>s>>c;
            if(mp[s])mp[s]=0;
            if(c=='+')mp[s]=1;
            else mp[s]=-1;
        }
        map<string, int> :: iterator it=mp.begin();
        int count =0;
        while(it!=mp.end()) {
            count+=it->second;
            it++;
        }
        printf("%d\n",count);
    }
}
