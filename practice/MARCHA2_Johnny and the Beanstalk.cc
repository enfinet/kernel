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
    while(t--) {
        int n;
        scanf("%d",&n);
        int x=1,f=0,num;
        while(n--) {
            scanf("%d",&num);
            if(num>x)f=1;
            x-=num;
            x*=2;
        }
        if(x||f)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
