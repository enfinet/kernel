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

string ext(string s)
{
    int l=s.length();
    string a="";
    int i=l-1;
    while(s[i]!='.') {
        a+=s[i];
        i--;
    }
    if(s[i]=='.') {
        reverse(a.begin(),a.end());
    //cout<<a<<endl;
        return a;
    }
    else return "";
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    map < string, string > mp;
    string a,b;
    for(int i=0;i<n;i++) {
        cin>>a>>b;
        mp[a]=b;
    }
    for(int i=0;i<m;i++) {
        cin>>a;
        string ans=ext(a);
        //cout<<ans<<endl;
        if(mp[ans]!="")cout<<mp[ans]<<endl;
        else cout<<"unknown\n";
    }
    return 0;
}
