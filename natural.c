#include<stdio.h>
int main()
{
    int n,i;
    int s=0;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        s=s+i;
    }
    printf("the required sum is  %d\n", s);
    return 0;
}