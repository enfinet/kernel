#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        /*int max=0,ind=0;
        for(int i=1;i<=sqrt(n);i++) {
            int x=n%i;
            if(max<x){
                max=x;
                ind=i;
            }
        }*/
        /*if(n%2)
        cout<<(int)ceil((double)n/2.0)<<endl;
        else*/ cout<<n/2+1<<endl;
    }
    return 0;
}
