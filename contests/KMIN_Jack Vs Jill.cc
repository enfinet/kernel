#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

struct compare
{
  bool operator()(const int& l, const int& r)
  {
      return l < r;
  }
};

int main()
{
    priority_queue<int,vector<int>,compare> pq;
    int n;
    scanf("%d",&n);
    int k,num;
    scanf("%d",&k);
    int count=k;
    for(int i=0;i<n;i++) {
        scanf("%d",&num);
        if(k) {
            if(num!=-1 )
                pq.push(num);
            else printf("%d\n",pq.top());
        } else {
            if(num !=-1) {
            if(num<pq.top()) {
                pq.pop();
                pq.push(num);
            }
            } else {
                printf("%d\n",pq.top());
            }
        }
        if(k)
            k--;
    }
    return 0;
}
