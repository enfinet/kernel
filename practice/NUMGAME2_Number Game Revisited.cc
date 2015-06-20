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
        if(n%4==1)
            printf("ALICE\n");
        else printf("BOB\n");
    }
    return 0;
}
