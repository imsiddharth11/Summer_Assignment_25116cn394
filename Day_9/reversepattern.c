#include<stdio.h>
int main(){
    int row,i,j;

    printf("Enter the number of rows\n");
    scanf("%d",&row);

    for(i=row;i>0;i--){
        for(j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}