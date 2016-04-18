#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%lld",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%lld",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl        printf("\n");
#define sp        printf(" ");

//typedef pair < int , int > PI;

int LIS(vector<int> A)
{
    int N = A.size(),i;
    set<int> s;
    set<int>::iterator k;
    for (i=0;i<N;i++)
    {
        if (s.insert(A[i]).second)
        {
           k = s.find(A[i]);
           k++;
           if (k!=s.end())
              s.erase(k);
        }
    }
    return s.size();
}

int main()
{
    int n;
    s(n);
    vector <int> v;
        int num;
    for(int i=0;i<n;i++) {
        s(num);
        v.push_back(num);
    }
    int len=LIS(v);
    p(len);nl;
    return 0;
}
/*
vector<int> LIS(vector<int> A)
{
    int N = A.size(),i,j=-1,t;
    vector<int> pre(N,-1),res;
    map<int,int> m;
    map<int,int>::iterator k,l;
    for (i=0;i<N;i++)
    {
        if (m.insert(PI(A[i],i)).second)
        {
           k = m.find(A[i]);
           l = k;
           k++;
           if (l==m.begin())
                  pre[i]=-1;
           else
           {
               l--;
               pre[i]=l->second;
           }
           if (k!=m.end())
              m.erase(k);
        }
    }
    k=m.end();
    k--;
    j = k->second;
    while (j!=-1)
    {
          res.push_back(A[j]);
          j = pre[j];
    }
    reverse (res.begin(),res.end());
    return res;
}
*/
