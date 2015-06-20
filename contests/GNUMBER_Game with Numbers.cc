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

#define MOD 1000000009

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        string s;
        cin>>s;
        string a=s;
        next_permutation(s.begin(),s.end());
        if(a==s)
            printf("-1\n");
        else {
            if(s[0]=='0')printf("-1\n");
            else {
                cout<<s<<endl;
            printf("\n");
            }
        }
        /*int l=s.length()-1;
        int len=l;
        char c=s[l],g;
        int
        f=0;
        l--;
        while(s[l]==c)l--;
        while(l>=0) {
            if(s[l]<c || (s[l]==c)) {
                f=1;
                g=s[l];
                break;
            }else c=s[l];
            l--;
        }
        if(f) {
            for(int i=0;i<=len;i++)
                if(i!=l)printf("%c",s[i]);
            printf("%c\n",g);
        }
        else printf("-1\n");*/
    }
    return 0;
}
