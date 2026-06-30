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
    printf("Row-wise sum of matrix:\n");
    for(i=0;i<c;i++)
    {
        sum=0;
        for(j=0;j<r;j++)
            sum+=a[i][j];
        printf("sum of row %d=%d\n",i+1,sum);
    }
    return 0;
}