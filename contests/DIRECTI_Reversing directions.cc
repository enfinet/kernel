#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
//#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cin.ignore();
        string a[42];
        for(int i=0;i<n;i++) {
            getline(cin,a[i]);
            //cout<<a[i]<<endl;
        }
        for(int i=n-1;i>=0;i--) {
            if(i==n-1) {
                cout<<"Begin";
                int j=0;
                if(a[i][0]=='L')j+=4;
                if(a[i][0]=='R')j+=5;
                for(;j<a[i].length();j++) {
                    cout<<a[i][j];
                }
                cout<<endl;
            }else {
                if(a[i+1][0]=='L') {
                    cout<<"Right";
                    int j=0;
                    if(a[i][0]=='L')j+=4;
                    if(a[i][0]=='R')j+=5;
                    if(a[i][0]=='B')j+=5;
                    for(;j<a[i].length();j++)
                        cout<<a[i][j];
                    cout<<endl;
                }
                if(a[i+1][0]=='R') {
                    cout<<"Left";
                    int j=0;
                    if(a[i][0]=='L')j+=4;
                    if(a[i][0]=='R')j+=5;
                    if(a[i][0]=='B')j+=5;
                    for(;j<a[i].length();j++)
                        cout<<a[i][j];
                    cout<<endl;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
