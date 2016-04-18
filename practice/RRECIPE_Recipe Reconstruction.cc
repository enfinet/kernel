#include<iostream>
#include<string>
#include<cstdio>
#define mod 10000009
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        string s;
        cin>>s;
        int count=1;
        for(int i=0,j=s.size()-1;i<=j;i++,j--)
        {
            if(s[i]=='?'&&s[j]=='?')
            {
                count=(count*26)%mod;
            }
            else if(s[i]=='?'&&s[j]!='?')
            {
                count=(count*1)%mod;
            }
            else if(s[i]!='?'&&s[j]=='?')
            {
                count=(count*1)%mod;
            }
            else if( s[i]==s[j])
            {
                count=(count*1)%mod;
            }
            else {
                count=0;
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
