#include <stdio.h>
int main()
{
    int a[100][100],r,c,i,j,found=0;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    if(r==c)
    {
        printf("Enter the elements of matrix:\n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]==a[j][i])
                    found=1;
            }
        }
        if(found==1)
            printf("Matrix is symmetric");
        else
            printf("Matrix is not symmetric");
    }
    else
        printf("A non-square matrix is always unsymmetric");
    return 0;
}