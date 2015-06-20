#include <stdio.h>

int a[20][20];
void spiral(int n)
{
    int size=n;
    int num=n*n;
    int m=n;
    int i, k = 0, l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            a[k][i]=num--;
        }
        k++;

        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i)
        {
            a[i][n-1]=num--;
        }
        n--;

        /* Print the last row from the remaining rows */
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                a[m-1][i]=num--;
            }
            m--;
        }

        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                a[i][l]=num--;
            }
            l++;
        }
    }
    if(size%2==0){
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    }else {
        for(int i=size-1;i>=0;i--) {
        for(int j=size-1;j>=0;j--)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    spiral(n);
    return 0;
}
