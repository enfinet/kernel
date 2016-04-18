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

int check(int a[])
{
    /*for(int i=48;i<65;i++)
        cout<<a[i]<<" ";
    cout<<endl;*/
    int e=0,f=0,t=0;
    e=a[56];
    f=a[53];
    t=a[51];
    int flag=1;
    if(a[48]||a[49]||a[50]||a[52]||a[54]||a[55]||a[57])flag=0;
    if(e>=f && f>=t&& t>=0 && flag)return 1;
    else return 0;
}

int main()
{
    int t;
    scanf("%d\n",&t);
    int num=0;
    string s;
    while(t--) {
        int a[70]={0};
        getline(cin,s);
        //cout<<s<<endl;
        int l=s.length()-1;
        int i=l;
        while(i>=0 && s[i]!=' ') {
            a[s[i]]++;
            i--;
        }
        if(check(a))num++;
    }
    printf("%d\n",num);
    system("PAUSE");
    return 0;
}
