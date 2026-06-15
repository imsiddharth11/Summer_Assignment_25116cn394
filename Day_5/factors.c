#include<stdio.h>
int main(){
    int n;
    printf("Enter the  number\n");
    scanf("%d",&n);

    int i,rem,temp=n;
    for(i=1;i<=n;i++){
        rem=temp%i;
        if(rem==0)
        printf("%d\t",i);
    }

    return 0;
}