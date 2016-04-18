#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
#include<string>
#include<cstdlib>

using namespace std;

int v[10000050];

void sieve(int upperBound) {
    v[0]=1;v[1]=1;
      for (int i = 2; i*i <= upperBound ; i++ ) {
            if (!v[i]){
                for (int j = i; i*j <= upperBound; j++) {
                    v[i*j] = 1;
                }
            }
      }
      int j=2;
          for (int i = 2; i <= upperBound; i++) {
            if (!v[i]) { v[i]=j++;}
          }
}

int check(int i,int j,int n)
{
    if(i<0 || i>=n || j<0 || j>=n) return 0;
    else return 1;
}

void recursn1(int a[355][355],int i,int j,int b[355][355],int n)
{
    if(!check(i,j,n) || v[a[i][j]]!=1 || a[i][j]%2 ||b[i][j])return ;
    b[i][j]=1;
    recursn1(a,i-1,j,b,n);
    recursn1(a,i+1,j,b,n);
    recursn1(a,i,j-1,b,n);
    recursn1(a,i,j+1,b,n);
        /*if(i-1>=0 && v[a[i-1][j]]==1 && a[i-1][j]%2==0 && !b[i-1][j]) {
            b[i-1][j]=1;
            recursn1(a,i-1,j,b,n);
        }
        if(i+1<n && v[a[i+1][j]]==1 && a[i+1][j]%2==0 && !b[i+1][j]) {
            b[i+1][j]=1;
            recursn1(a,i+1,j,b,n);
        }
        if(j-1>=0 && v[a[i][j-1]]==1 && a[i][j-1]%2==0 && !b[i][j-1]) {
            b[i][j-1]=1;
            recursn1(a,i,j-1,b,n);
        }
        if(j+1<n && v[a[i][j+1]]==1 && a[i][j+1]%2==0 && !b[i][j+1]) {
            b[i][j+1]=1;
            recursn1(a,i,j+1,b,n);
        }
    }*/
}

void recursn2(int a[355][355],int i,int j,int b[355][355],int n)
{
    if(!check(i,j,n) || v[a[i][j]]!=1 || a[i][j]%2==0 ||b[i][j])return ;
    b[i][j]=1;
    recursn2(a,i-1,j,b,n);
    recursn2(a,i+1,j,b,n);
    recursn2(a,i,j-1,b,n);
    recursn2(a,i,j+1,b,n);
    //if(i<0 || i>=n || j<0 || j>=n) return ;
    /*if(a[i][j]%2) {
        if(i-1>=0 && v[a[i-1][j]]==1 && a[i-1][j]%2 && !b[i-1][j]) {
            b[i-1][j]=1;
            recursn2(a,i-1,j,b,n);
        }
        if(i+1<n && v[a[i+1][j]]==1 && a[i+1][j]%2 && !b[i+1][j]) {
            b[i+1][j]=1;
            recursn2(a,i+1,j,b,n);
        }
        if(j-1>=0 && v[a[i][j-1]]==1 && a[i][j-1]%2 && !b[i][j-1]) {
            b[i][j-1]=1;
            recursn2(a,i,j-1,b,n);
        }
        if(j+1<n && v[a[i][j+1]]==1 && a[i][j+1]%2 && !b[i][j+1]) {
            b[i][j+1]=1;
            recursn2(a,i,j+1,b,n);
        }
    }*/
}


int main()
{
    sieve(10000000);
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int a[355][355];
        int b[355][355]={0};
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf("%d",&a[i][j]);

        long long count=0ll;
        //cout<<v[a[0][0]]<<endl;

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(v[a[i][j]]!=1) {
                    count+=(long long)v[a[i][j]]-2ll;
                    b[i][j]=1;
                } else if(a[i][j]%2==0 && !b[i][j]) {
                    count+=(long long)(a[i][j]/2ll);
                    //b[i][j]=1;
                    recursn1(a,i,j,b,n);
                } else if(a[i][j]%2 && !b[i][j]) {
                    count+=(long long)(a[i][j]/2ll + 2ll);
                    //b[i][j]=1;
                    recursn2(a,i,j,b,n);
                }
                //cout<<count<<" ";
            }
            //cout<<endl;
        }
        cout<<count<<endl;
    }
    return 0;
}
