#include<stdio.h>
int main(){
    int row,i,j;

    printf("Enter the number of rows\n");
    scanf("%d",&row);

    for(i=row;i>0;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}