#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        string s;
        cin>>s;
        int i=0,sum=0;
        while(s[i]) {
            switch(s[i]) {
            case 'A':
            case 'D':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':sum++;
                break;
            case 'B':sum+=2;
                break;
            default :
                break;
            }
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
