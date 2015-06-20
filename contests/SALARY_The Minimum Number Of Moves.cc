#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int count=0;
        for(int i=1;i<n;i++)
            count+=a[i]-a[0];
        cout<<count<<endl;
    }
    return 0;
}
