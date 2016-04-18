#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int arr[200005];
int temp[200005];
int arr1[200005];
int arr2[100005];
long long merge(int left, int mid, int right)
{
  int i, j, k;
  long long inv_count = 0;

  i = left;
  j = mid;
  k = left;
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
      inv_count = inv_count +(long long)(mid - i);
    }
  }

  while (i <= mid - 1)
     temp[k++] = arr[i++];

  while (j <= right)
     temp[k++] = arr[j++];

  for (i=left; i <= right; i++)
    arr[i] = temp[i];

  return inv_count;
}

long long mergeSort(int left, int right)
{
  int mid;
  long long inv_count = 0;
  if (right > left)
  {
    mid = (right + left)/2;
    inv_count  = mergeSort(left, mid);
    inv_count += mergeSort(mid+1, right);
    inv_count += merge(left, mid+1, right);
  }
  return inv_count;
}


int main()
{
    int t,n;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++) {
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<=n;i++) {
            scanf("%d",&arr2[i]);
        }
        for(int i=1;i<=n;i++)
			arr1[arr2[i]]=i;;
		for(int i=1;i<=n;i++)
			arr[i]=arr1[arr[i]];
        printf("%lld\n", mergeSort(1, n));
    }
  return 0;
}

