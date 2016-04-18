#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
#include<string>
#include<cstdlib>

#define MOD 1000000007

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long int a[4];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        //cout<<(1000000000000000000ll-2ll)%MOD<<endl;
        long long x=(((((a[0]%MOD)*((a[1]-1ll)%MOD))%MOD)*((a[2]-2ll)%MOD))%MOD)%MOD;
        cout<<x<<endl;
    }
    return 0;
}
