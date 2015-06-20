#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
    map< string, string > mp1;
    map< string, int > mp2;
    map< string, int > mp3;
    int n,m;
    cin>>n>>m;
    string a,b;
    for(int i=0;i<n;i++) {
        cin>>a>>b;
        mp1[a]=b;
        mp2[a]=0;
    }
    for(int i=0;i<m;i++) {
        cin>>a;
        mp2[a]++;
        mp3[mp1[a]]++;
    }
    map< string, int > :: iterator it;
    int max=-1;
    string x="";
    for(it=mp2.begin();it!=mp2.end();it++) {
        if(max<it->second) {
            max=it->second;
            x=it->first;
        }
    }
    string t="";
    int cnt=0;
    max=-1;
    for(it=mp3.begin();it!=mp3.end();it++) {
        if(max<it->second) {
            max=it->second;
            t=it->first;
        }
    }
    /*//map< string ,int > ::reverse_iterator it1;
    for(it=mp3.begin();it!=mp3.rend();it1++) {
        if(it1==mp3.rbegin()){
            cnt=it1->second;
            t=it1->first;
        }else {
            if(cnt==it1->second) {
                t=it1->first;
            }
        }
    }*/
    cout<<t<<endl<<x<<endl;
    /*char c;
    cin>>c;*/
    return 0;
}
