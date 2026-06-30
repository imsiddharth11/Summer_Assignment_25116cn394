#include <stdio.h>
int main()
{
    int a[100][100],r,c,i,j,sum;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    printf("Column-wise sum of matrix:\n");
    for(j=0;j<c;j++)
    {
        sum=0;
        for(i=0;i<r;i++)
            sum+=a[i][j];
        printf("sum of column %d=%d\n",j+1,sum);
    }
    return 0;
}