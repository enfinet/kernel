#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x;
    double y;
    cin>>x>>y;
    double a=(double)x;
    if(!(x%5) && a+0.5 < y)
        printf("%.2f\n",y-a-0.5);
    else
        printf("%.2f\n",y);
    return 0;
}
