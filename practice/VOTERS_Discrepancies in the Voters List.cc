#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
using namespace std;

//int aa[200001],bb[200001];
map < int,int > aa;
int pp;

/*int bsearch(int num,int start,int end)
{
    int mid=(start+end)/2;
    if(start<=end) {
        if(num==aa[mid])
            return 1;
        else if(num>aa[mid])
            return bsearch(aa,num,mid+1,end);
        else return bsearch(aa,num,start,mid-1);
    } else {
        return 0;
    }
}*/

int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    int a[x],b[y],c[z];
    map < int,int > mp1;
    map < int,int > mp2;
    map < int,int > mp3;

    int num;

    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]);
        mp1[a[i]]=1;
    }
    for(int i=0;i<y;i++) {
        scanf("%d",&b[i]);
        mp2[b[i]]=1;
    }
    for(int i=0;i<z;i++) {
        scanf("%d",&c[i]);
        mp3[c[i]]=1;
    }

    //merge(aa,b,x,y);
    /*int i=0,j=0,k=0;

    while(j<x&&k<y) {
        if(a[j]==b[k]) {
            aa[i++]=a[j];
            j++,k++;
        }else {
            if(a[j]<b[k])
                aa[i++]=a[j++];
            else aa[i++]=b[k++];
        }
    }
    if(j<x) {
        while(j<x){
            aa[i++]=a[j++];
        }
    }else if(k<y) {
        while(k<y){
            aa[i++]=b[k++];
        }
    }*/

    int ans=0;
    for(int i=0;i<z;i++)
        //if(bsearch(a,c[i],0,x)) {
        if(mp1[c[i]]) {
            ans++;
            aa[c[i]]=1;
        }
    for(int i=0;i<z;i++)
        //if(bsearch(b,c[i],0,y) && !bsearch(aa,c[i],0,pp)) {
        if(mp2[c[i]] && !aa[c[i]]) {
            ans++;
            aa[c[i]]=1;
            //sort(aa,aa+pp);
        }
    for(int i=0;i<x;i++)
        //if(bsearch(a,b[i],0,y) && !bsearch(aa,a[i],0,pp)) {
        if(mp2[a[i]] && !aa[a[i]]) {
            ans++;
            aa[a[i]]=1;
            //sort(aa,aa+pp);
        }
    //sort(aa,aa+pp);
    printf("%d\n",ans);
    map < int,int > ::iterator it=aa.begin();
    while(it!=aa.end()) {
        printf("%d\n",it->first);
        it++;
    }
    return 0;
}
