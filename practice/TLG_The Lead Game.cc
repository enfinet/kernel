#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    int num,a,b;
    int max=0;
    scanf("%d",&t);
    int x[t],y[t],i=0;
    num=t;
    int p=0,q=0;
    while(t--) {
        cin>>a>>b;
        p+=a;
        q+=b;
        if(p<q) {
            y[i]=q-p;
            x[i]=2;
        }else {
            y[i]=p-q;
            x[i]=1;
        }
        i++;
    }
    int ans=1;
    for(int i=0;i<num;i++)
        if(y[i]>max) {
            max=y[i];
            ans=x[i];
        }
    cout<<ans<<" "<<max<<endl;
    return 0;
}
