#include<iostream>
#include<algorithm>
using namespace std;
int fact(int num)
{
    if(num==1||num==0)return 1;
    else return fact(num-1)*num;
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a[12];
        for(int i=0;i<11;i++)
            cin>>a[i];
        sort(a,a+11);
        int k;
        cin>>k;
        int count1=0,count2=0,n=11-k,m=k;
      //  cout<<a[11-k]<<endl;
        for(int l=11-k;l<=10;l++) {
            if(a[11-k]==a[l])count2++;
        }
        for(int j=0;j<11;j++) {
            if(a[j]==a[n])
                count1++;
        }
//        cout<<count1<<" "<<count2<<endl;
        cout<<fact(count1)/(fact(count2)*fact(count1-count2))<<endl;
    }
    return 0;
}
