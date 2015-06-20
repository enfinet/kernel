#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    string a="zyxwvutsrqponmlkjihgfedcba";
    while(t--) {
        int n;
        scanf("%d",&n);
        int x=0;
        //if(n>25) {
            x=n/25;
            n=n%25;
        //}
        string s="";
        if(n)
            s=&a[25-n];
        while(x--){
            s+=a;
        }
        cout<<s<<endl;
    }
    return 0;
}
